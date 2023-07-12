#include <iostream>
#include <exception>
#include <string>

#include "Product.h"
#include "ElectronicProduct.h"
#include "Clothing.h"
#include "OutOfStockExeption.h"

int main()
{
    ElectronicProduct laptop("Laptop", 1500.0, 5, 12);

    try
    {
        for (int i = 0; i < 6; i++)
            laptop.placeOrder();
    }
    catch (const OutOfStockException& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    cout << endl << "---------------------------------------------" << endl;

    Clothing shirt("Shirt", 25.0, "Red", "M");

    try
    {
        shirt.placeOrder();
    }
    catch (const OutOfStockException& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
