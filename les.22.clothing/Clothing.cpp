#include "Clothing.h"

Clothing::Clothing(const string name, double price, const string color, const string size)
    :
    Product(name, price),
    color(color),
    size(size)
{}

void Clothing::placeOrder()
{
    if (color == "Black" && size == "M")
        cout << "Order: " << name << endl;
    else
        throw OutOfStockException();
}
