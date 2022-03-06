#include <iostream>

int my_function(int a, int b)
{
    return a + b;
}

double my_function(double a, double b)
{
    return a + b;
}

int main()
{
    std::cout << "Result: " << my_function(5, 10) << std::endl;
    std::cout << "Result: " << my_function(5.1, 10.1) << std::endl;
    return 0;
}
