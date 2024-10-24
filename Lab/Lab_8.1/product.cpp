#include "product.h"

Product::Product() {
    name = "DEFAULT";
    code = "SKU0000";
    price = 0.00;
    quantity = 0;
}

Product::Product(string name, string code, double price, int quantity) {
    this->name = name;
    this->code = code;
    this->price = price;
    this->quantity = quantity;
}

void Product::SetName(string const &name) {
    this->name = name;
}
void Product::SetCode(string const &code) {
    this->code = code;
}
void Product::SetPrice(double const &price) {
    this->price = price;
}
void Product::SetQuantity(int const &quantity) {
    this->quantity = quantity;
}

string Product::GetName() {
    return name;
}

string Product::GetCode() {
    return code;
}

double Product::GetPrice() {
    return price;
}

int Product::GetQuantity() {
    return quantity;
}

Inventory::Inventory() {
    this->products = {};
}

Inventory::Inventory(vector<Product> const &products) {
    this->products = products;
}

void Inventory::AddInventory(string const &name,string const &code,double const &price,int const &quantity) {
    Product NewProduct(name, code, price, quantity);
    products.push_back(NewProduct);
}
void Inventory::SellInventory(string const &code, int const &quantity) {
    for (Product& obj : products) {
        if(obj.GetCode() == code) {
            obj.SetQuantity(obj.GetQuantity()+quantity);
        }
    }
}

void Inventory::PrintInventory() {
    
    cout << "Name: " << products.back().GetName() << endl;
    cout << "Code: " << products.back().GetCode() << endl;
    cout << fixed << setprecision(2) << "Price: " << products.back().GetPrice() << endl;
    cout << "Quantity: " << products.back().GetQuantity() << endl << endl;
}