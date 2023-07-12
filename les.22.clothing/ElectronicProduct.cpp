#include "ElectronicProduct.h"

ElectronicProduct::ElectronicProduct(const string name, double price, int quantity, int warranty)
    :
    Product(name, price),
    quantity(quantity),
    warranty(warranty)
{}

void ElectronicProduct::placeOrder()
{
    if (quantity <= 0)
        throw OutOfStockException();

    cout << "Order: " << name << endl;
    quantity--;
}
