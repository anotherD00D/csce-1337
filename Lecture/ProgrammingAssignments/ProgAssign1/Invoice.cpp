#include "Invoice.h"

Invoice::Invoice() {
    partNumber = "0001";
    partDesc = "woop";
    quantity = 10;
    price = 2;
}

Invoice::Invoice(string partNumber, string partDesc, int quantity, int price) {
   quantity = (quantity > 0) ? quantity : 0;
   price = (price > 0) ? price : 0;
   
    this->partNumber = partNumber;
    this->partDesc = partDesc;
    this->quantity = quantity;
    this->price = price;
}

int Invoice::getPrice() const {
    return price;
}

int Invoice::getQuantity() const {
   return quantity;  
}

int Invoice::getInvoiceAmount() const {
   return (quantity * price);
}

string Invoice::getPartNumber() const {   
   return partNumber;  
}
   
string Invoice::getPartDesc() const {
   return partDesc;  
}

void Invoice::PrintInitialInvoice() const {
   cout << "The initial part number is " << Invoice::getPartNumber() << endl;
   cout << "The initial part description is " << Invoice::getPartDesc() << endl;
   cout << "The initial quantity of requested part is " << Invoice::getQuantity() << endl;
   cout << "The initial price of requested part is " << Invoice::getPrice() << endl;
   cout << "The current invoice cost is " << Invoice::getInvoiceAmount() << endl << endl;
}

void Invoice::PrintNewInvoice() const {
   cout << endl;
   cout << "The new part number is " << Invoice::getPartNumber() << endl;
   cout << "The new part description is " << Invoice::getPartDesc() << endl;
   cout << "The new quantity of requested part " << Invoice::getQuantity() << endl;
   cout << "The new price of requested part " << Invoice::getPrice() << endl;
   cout << "The new invoice cost is " << Invoice::getInvoiceAmount() << endl;
}