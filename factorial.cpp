#include <iostream>
int main()
{
    unsigned int num = -10;
    unsigned long long factorial = 1;

    for (int i = 1; i <= num; ++i)
    {
        factorial *= i;
    }

    std::cout << "Factorial of " << num << " = " << factorial;
    return 0;
}
