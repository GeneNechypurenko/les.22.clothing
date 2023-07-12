#pragma once

#include "OutOfStockExeption.h"

using namespace std;

class Product
{
protected:
    string name;
    double price;

public:
    Product(const string name, double price);
    virtual void placeOrder() = 0;
};