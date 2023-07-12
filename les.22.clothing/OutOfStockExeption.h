#pragma once
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class OutOfStockException : public exception
{
public:
    const char* what() const noexcept;
};

