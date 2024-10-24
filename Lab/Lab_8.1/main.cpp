#include "product.h"
#include "product.cpp"

int main() {
    Inventory inv1;

    inv1.AddInventory("Apple", "SKU234", 0.40, 3);
    inv1.PrintInventory();

    inv1.SellInventory("SKU234", 10-5);
    inv1.PrintInventory();

    inv1.AddInventory("Golden Delicious", "SKU555", 0.55, 4);
    inv1.PrintInventory();
    return 0;
}