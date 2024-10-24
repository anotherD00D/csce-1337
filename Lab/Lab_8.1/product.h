#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

#ifndef PRODUCT_H
#define PRODUCT_H

using namespace std;

class Product{
    public:
        Product();
        Product(string name, string code, double price, int quantity);

        void SetName(string const &name);
        void SetCode(string const &code);
        void SetPrice(double const &price);
        void SetQuantity(int const &quantity);

        string GetName();
        string GetCode();
        double GetPrice();
        int GetQuantity();
    private:
        string name;
        string code;
        double price;
        int quantity;
};

class Inventory{
    private:
        vector<Product> products;
    public:
        Inventory();
        Inventory(vector<Product> const &products);
        void AddInventory(string const &name ,string const &code ,double const &price ,int const &quantity);
        void SellInventory(string const &code ,int const &quantity);
        void PrintInventory();
};

#endif