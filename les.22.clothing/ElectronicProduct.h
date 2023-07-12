#include "Product.h"

class ElectronicProduct : public Product
{
private:
    int quantity;
    int warranty;

public:
    ElectronicProduct(const string name, double price, int quantity, int warranty);
    void placeOrder() override;
};