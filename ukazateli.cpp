//вариант 8
//задача 1 double
/*
#include <iostream>

int main() {
    double var1 = 3.14;
    double var2 = 2.71;

    double* ptr1 = &var1;
    double* ptr2 = &var2;

    double sum = *ptr1 + *ptr2;
    double diff = *ptr1 - *ptr2;

    std::cout << "Address of ptr1: " << ptr1 << std::endl;
    std::cout << "Address of ptr2: " << ptr2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;

    return 0;
}
*/

//задача 2 double
/*
#include <iostream>

void swap(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double var1 = 3.14;
    double var2 = 2.71;

    std::cout << "do: x = " << var1 << ", y = " << var2 << std::endl;

    swap(&var1, &var2);

    std::cout << "posle: x = " << var1 << ", y = " << var2 << std::endl;

    return 0;
}
*/

//задача 3 double
/*
#include <iostream>
#include <cstdlib> 
#include <ctime> 

int main() {
    int size;

    std::cout << "razmer: ";
    std::cin >> size;

    double* array = new double[size];

    std::srand(std::time(nullptr));

    for (int i = 0; i < size; i++) {
        array[i] = static_cast<double>(std::rand()) / RAND_MAX;
    }

    for (int i = 0; i < size; i++) {
        std::cout << "adres: " << &array[i] << ", value: " << array[i] << std::endl;
    }

    delete[] array;

    return 0;
}
*/

//задача 4h
#include <iostream>
#include <string>

struct Shoe {
    std::string brand;
    std::string model;
    int size;
};

void modifyShoe(Shoe* shoes, int index, const std::string& brand, const std::string& model, int size) {
    shoes[index].brand = brand;
    shoes[index].model = model;
    shoes[index].size = size;
}

int main() {
    const int numShoes = 3; 

    Shoe* shoes = new Shoe[numShoes];

    shoes[0].brand = "Nike";
    shoes[0].model = "Air Max";
    shoes[0].size = 10;

    shoes[1].brand = "Adidas";
    shoes[1].model = "Ultraboost";
    shoes[1].size = 9;

    shoes[2].brand = "Puma";
    shoes[2].model = "Fierce";
    shoes[2].size = 8;

    modifyShoe(shoes, 1, "Reebok", "Classic", 9);

    for (int i = 0; i < numShoes; ++i) {
        std::cout << "Shoe " << i + 1 << ":\n";
        std::cout << "Brand: " << shoes[i].brand << "\n";
        std::cout << "Model: " << shoes[i].model << "\n";
        std::cout << "Size: " << shoes[i].size << "\n";
        std::cout << "\n";
    }

    delete[] shoes;

    return 0;
}
