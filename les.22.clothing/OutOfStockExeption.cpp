#include "OutOfStockExeption.h"

const char* OutOfStockException::what() const noexcept
{
    return "Product is currently out of stock!";
}
