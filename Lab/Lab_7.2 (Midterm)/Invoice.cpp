#include "Invoice.h"

Invoice::Invoice() {
    partNumber = "0000";
    partDesc = "DEFAULT";
    quantity = 0;
    price = 0;
}

Invoice::Invoice(string partNumber, string partDesc, int quantity, int price) {
   quantity = (quantity > 0) ? quantity : 0;
   price = (price > 0) ? price : 0;
   
    this->partNumber = partNumber;
    this->partDesc = partDesc;
    this->quantity = quantity;
    this->price = price;
}

void Invoice::setPartDesc(string partDesc) {
   this->partDesc = partDesc;
}

void Invoice::setPartNumber(string partNumber) {
   this->partNumber = partNumber;
}

void Invoice::setPrice(int price) {
   this->price = price;
}

void Invoice::setQuantity(int quantity) {
   this->quantity = quantity;
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

void Invoice::PrintNewInvoice() const {
   cout << '\n';
   cout << "OUTPUT" << endl;
   cout << "The part number is " << Invoice::getPartNumber() << endl;
   cout << "The part description is " << Invoice::getPartDesc() << endl;
   cout << "The quantity of requested part " << Invoice::getQuantity() << endl;
   cout << "The price of requested part " << Invoice::getPrice() << endl;
   cout << "The invoice cost is " << Invoice::getInvoiceAmount() << endl;
}