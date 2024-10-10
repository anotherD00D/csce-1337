#include <iostream>
#include <string>

#ifndef INVOICE_H
#define INVOICE_H

using namespace std;

class Invoice {
    
public:
    Invoice();
    Invoice(string partNumber, string partDesc, int quantity, int price);
    
    //functions
    int getPrice() const;
    int getQuantity() const;
    int getInvoiceAmount() const;
    string getPartNumber() const;
    string getPartDesc() const;
    
    void setPartNumber(string partNumber);
    void setPartDesc(string partDesc);
    void setPrice(int price);
    void setQuantity(int quantity);

    void PrintInitialInvoice() const;
    void PrintNewInvoice() const;

private:
    string partNumber;
    string partDesc;
    int quantity;
    int price;
};

#endif