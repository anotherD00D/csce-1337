#include "Invoice.h"
#include "Invoice.cpp"

int main()
{
   int InputPrice;
   int InputQuantity;
   string InputPartNumber;
   string InputPartDesc;
   
    Invoice invoice1;
    invoice1.PrintInitialInvoice();
   
   cout << "Enter a new part number: ";
   getline(cin, InputPartNumber);

   cout << "Enter a new part description: ";
   getline(cin, InputPartDesc);
   
   cout << "Enter the new desired quantity: ";
   cin >> InputQuantity;
   
   cout << "Enter the new price: ";
   cin >> InputPrice;
    
    
   Invoice invoice2(InputPartNumber, InputPartDesc, InputQuantity, InputPrice);
   invoice2.PrintNewInvoice();

    return 0;
}