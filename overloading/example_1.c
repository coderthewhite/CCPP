#include <stdio.h>

int my_function(int a, int b)
{
    return a + b;
}


int main()
{
    double a = 5.0;
    double b = 3.14;
    printf("Result: %d\n", my_function(a, b));
    return 0;
}
