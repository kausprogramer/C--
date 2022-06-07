#include <iostream>

int main()
{
    int x=10;
    int *ptr;
    ptr= &x;
    *ptr=10;
    int z=20;
    int &y=z;
    y++;
    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;
    std::cout<<&ptr<<std::endl;             
    std::cout<<ptr+1<<std::endl;
    std::cout<<z<<std::endl;
    return 0;
}