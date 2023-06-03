#include <iostream>
#include "sum.h"

int main()
{
    int a, b ,c;
    std::cout<<("Enter two int numbers:\n");
    std::cin>>a>>b;
    std::cout<<a<<"+"<<b<<"="<< sum(a, b);
    return 0;
}