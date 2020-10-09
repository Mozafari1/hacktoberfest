#include <iostream>
#include <math.h>
int convert(long int binary);

int main()
{
    long int binary;

    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    std::cout << "Converted octal number: " << convert(binary) << std::endl;

    return 0;
}
int convert(long int binary)
{
    int octal = 0, decimal = 0, i = 0;

    do
    {
        decimal += (binary % 10) * pow(2, i);
        ++i;
        binary /= 10;
    } while (binary != 0);

    i = 1;
    do
    {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    } while (decimal != 0);

    return octal;
}