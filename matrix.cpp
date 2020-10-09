#include <iostream>
#define Dimentional 3
void multiply(int matrix1[][Dimentional], int matrix2[][Dimentional], int result[][Dimentional]);

int main()
{
    int i, j;
    int result[Dimentional][Dimentional];
    int matrix1[Dimentional][Dimentional] = {{11, 12, 13},
                                             {21, 22, 23},
                                             {41, 42, 43}};

    int matrix2[Dimentional][Dimentional] = {{14, 15, 16},
                                             {31, 32, 33},
                                             {45, 66, 54}};
    multiply(matrix1, matrix2, result);

    std::cout << "Result: " << std::endl;
    for (i = 0; i < Dimentional; i++)
    {
        for (j = 0; j < Dimentional; j++)
            std::cout << result[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}
void multiply(int matrix1[][Dimentional], int matrix2[][Dimentional], int result[][Dimentional])
{
    int i, j, k;

    for (i = 0; i < Dimentional; i++)
    {
        for (j = 0; j < Dimentional; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < Dimentional; k++)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }
}