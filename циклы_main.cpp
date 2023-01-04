#include <iostream> // неделя 3-4 ВАРИАНТ 8
#include <cmath>

int dzOne(){
    int num;

    std::cout << "Введите число \n";
    std::cin >> num;

    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < i+1; ++j) {
            std::cout << "0";
        }
        std::cout << "\n";
    }

    return 0;
}

int dzTwo(){
    float max,min,step;

    std::cout << "Введите верхнюю границу значений\n";
    std::cin >> max;

    std::cout << "Введите нижнюю границу значени \n";
    std::cin >> min;

    std::cout << "Введите размер шага \n";
    std::cin >> step;


    while(min <= max){
        std::cout << "y = " << -((5 + 4 * min)*(5 + 4 * min)) + 8 * min << " при x = " << min << "\n";
        min += step;
    }

    return 0;
}

int dzThree(){
    float max,min,step;

    std::cout << "Введите верхнюю границу значений\n";
    std::cin >> max;

    std::cout << "Введите нижнюю границу значени \n";
    std::cin >> min;

    std::cout << "Введите размер шага \n";
    std::cin >> step;


    while(min <= max){
        std::cout << "y = " << sqrt(5 + (3 / min)) + 11 * min + 1/tan(2 * min + 15) << " при x = " << min << "\n";
        min += step;
    }

    return 0;
}

int dzFour(){//нет букв в задании по этому выполненно 4
    float max,min,step;

    std::cout << "Print upper threshold \n";
    std::cin >> max;

    std::cout << "Print lower threshold \n";
    std::cin >> min;

    std::cout << "Print step \n";
    std::cin >> step;


    while(min <= max){
        std::cout << min + step << " ";
        min += step;
    }

    return 0;
}

int dzTwoOne(){//в файле нет 12 задания

    return 0;
}

int fact(int N){
    int num = 1;
    for (int i = 0; i < N; ++i) {
        num = num * (N-i);
    }
    return num;
}

int degree(int N,int H){
    int num = 1;
    for (int i = 0; i < H; ++i) {
        num = num * N;
    }
    return num;
}

int dzTwoTwo(){
    int x,h,hTemp;
    float num;

    std::cout << "Введите x \n";
    std::cin >> x;

    std::cout << "Введите Ч \n";
    std::cin >> h;


    for (int i = 0; i < h/2; ++i) {
        if (i % 2 == 0){
            num -= degree(x,hTemp)/ fact(hTemp);
        } else{
            num += degree(x,hTemp)/ fact(hTemp);
        }
        hTemp+= 2;
    }

    return 0;
}

int dzTwoThree(){
    int x,h,hTemp = 2;
    float num = 0;

    std::cout << "Введите x \n";
    std::cin >> x;

    std::cout << "Введите Ч \n";
    std::cin >> h;

    for (int i = 0; i < h; ++i) {
        num = num + 1/((i+1)*x);
    }

    std::cout << num;

    return 0;
}

int main() {
dzOne();
    dzTwo();
    dzThree();
    dzFour();
    dzTwoOne();
    dzTwoTwo();
    dzTwoThree();
}
