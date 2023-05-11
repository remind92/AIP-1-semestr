//вариант 8
//задача 2
/*
#include <iostream>
#include <array>

int main() {
    const int row =10, col=10;


    std::array<std::array<int,row>,col> arr;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        int mul = arr[i][1];  
        for (int j = 0; j < col; j++) {
            arr[i][j] *= mul;
        }
    }

    std::cout << "Результат: " << std::endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
           std:: cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
*/

//задача 4
/*
#include <iostream>
#include <array>
#include <time.h>

int func(std::array<std::array<int, 4>, 4> matrix)
{
    int summ = 0;
    int i = 0;
    int j = 0;

    while (i < 4) {
        if (matrix[i][j] > 0 && i%2==0)
            summ += matrix[i][j];
        i++;
        j++;
    }

    i = 1;
    j = 0;

    while (i < 4) {
        if (matrix[i][j] > 0 && i % 2 == 0)
            summ += matrix[i][j];
        i++;
        j++;
    }
    return summ;
}

int main()
{
    const int row = 4;
    const int col = 4;
    srand(time(0));

    std::array<std::array<int, row>, col> matrix;

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            matrix[i][j] = rand() % 20 - 10;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Summ = " << func(matrix) << std::endl;
    return 0;
}
*/
//задача 7
/*
#include <iostream>
#include <array>
#include <time.h>
void func(std::array<std::array<int, 5>, 2> matrix)
{
    int i = 0;
    int j = 0;
    int i_max = 0;
    int i_2_max = 0;
    int veter = 0;
    int dojd = 0;

    while (i < 4) {
        if (matrix[i][j] > veter)
        {
            veter = matrix[i][j];
            i_max = i;
            i++;
        }
    }

    i = 0;
    j = 0;
    j++;
    while (i < 4) {
        if (matrix[i][j] > dojd)
            dojd = matrix[i][j];
        i_2_max = i;
        i++;
    }
    
    if (i_max == i_2_max)
    {
        std::cout << "yes" << std::endl;
    }
    else
        std::cout << "no" << std::endl;
}

int main()
{
    const int row = 5;
    const int col = 2;
    srand(time(0));

    std::array<std::array<int, row>, col> matrix;

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            matrix[i][j] = rand() % 4;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    func(matrix);
    return 0;
}
*/

//задача 9b
/*
#include<iostream>
#include<array>
#include<time.h>

struct Robot
{
    int power;
    int speed;
};

const int row = 3;
const int col = 3;

void func(std::array<std::array<Robot, col>, row> dask)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << dask[j][i].power << ";" << dask[j][i].speed << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::array<std::array<Robot, col>, row> dask;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << "Power: ";
            std::cin >> dask[j][i].power;
            std::cout << "Speed: ";
            std::cin >> dask[j][i].speed;
        }
    }
    std::cout << std::endl;

    func(dask);
    return 0;
}
*/

//задача 10(2)

#include <iostream>
#include <array>

const int row = 10, col = 10;

int normal_matrix(std::array<std::array<int, col>, row> matrix)
{
    std::array<int, 3> summ;
    int num_summ;
    int num_max = -1;
    for (int i = 0; i < row; i++)
    {
        num_summ = 0;
        for (int j = 0; j < col; j++)
        {
            num_summ += abs(matrix[j][i]);
        }
        summ[i] = num_summ;
    }

    for (int a = 0; a < 3; a++)
    {
        if (summ[a] > num_max)
        {
            num_max = summ[a];
        }
    }

    return num_max;
}

int main() {

    std::array<std::array<int, row>, col> matrix;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        int mul = matrix[i][1];
        for (int j = 0; j < col; j++) {
            matrix[i][j] *= mul;
        }
    }

    std::cout << "Результат: " << std::endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Normal: " << normal_matrix(matrix) << std::endl;

    return 0;
}
