#pragma once

#include "Product.h"

class Clothing : public Product
{
private:
    string color;
    string size;

public:
    Clothing(const string name, double price, const string color, const string size);
    void placeOrder() override;
};