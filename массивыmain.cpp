#include <iostream>
#include <stdlib.h>
#include <string>

const int N = 20;
const int Ncity = 7;

int dzOne(){
    int numbers[N];

    for (int i = 0; i < N; ++i) {
        numbers[i] = rand() % 100;
    }

    for (int i = 0; i < N; ++i) {
        std::cout << numbers[i] <<"\n";
    }
    std::cout << "\n";

    return 0;
}

int dzTwo(){
    int numbers[N];
    int sumOne = 0,sumTwo = 0,sumThree = 0;

    for (int i = 0; i < N; ++i) {
        numbers[i] = rand() % 30 +1;
    }

    for (int i = 0; i < N; ++i) {
        if (numbers[i] > 9){
            sumOne += numbers[i];
        }
        if (numbers[i] < 20){
            sumTwo += numbers[i];
        }
        if (numbers[i] < 3){
            sumThree += numbers[i];
        }
    }

    std::cout << "сумма чисел больше 9 = " << sumOne << "\nсумма чисел меньше 20 = " << sumTwo << "\nсумма чисел меньше 3 = " << sumThree <<"\n";

    return 0;
}

int dzThree(){
    int numbers[N];

    for (int i = 0; i < N; ++i) {
        numbers[i] = rand() % 200 -100;
    }

    for (int i = 0; i < N; ++i) {
        if (numbers[i]<0){
            numbers[i] = 0;
        }
    }

    for (int i = 0; i < N; ++i) {
        std::cout << numbers[i] <<"\n";
    }
    std::cout << "\n";

    return 0;
}

int dzFour(){
    int numbers[N];
    int iNegativ = 0;

    for (int i = 0; i < N; ++i) {
        numbers[i] = rand() % 200 - 100;;
    }

    for (int i = 0; i < N; ++i) {
        if (numbers[i]<0){
            iNegativ++;
        }
    }

    std::cout << "Количество отрицательных элементов = " << iNegativ << "\n\n";

    return 0;
}

int dzFive(){
    int numbers[N];
    int even = 0,odd = 0;
    float sr;

    for (int i = 0; i < N; ++i) {
        numbers[i] = rand() % 200 -100;
    }

    for (int i = 0; i < N; ++i) {
        if(numbers[i] % 2 == 0){
            even++;
        } else{
            odd++;
        }
    }

    std::cout <<"Количество четных = "<< even<<". Количество нечетных = " << odd << "\n\n";

    return 0;
}

int dzSix(){
    int numbersOne[N];
    int numbersTwo[N];
    int numbersResult[N];

    for (int i = 0; i < N; ++i) {
        numbersOne[i] = rand() % 200 -100;
        numbersTwo[i] = rand() % 200 -100;
    }

    for (int i = 0; i < N; ++i) {
        numbersResult[i] = numbersOne[i] / numbersTwo[i];
    }

    for (int i = 0; i < N; ++i) {
        std::cout << numbersResult[i] << "\n";
    }
    std::cout << "\n\n";
    return 0;
}

struct City{
    std::string subname;
    int age;
    const char *gender;
};

int dzSeven(){
    City city[Ncity];

    city[0].subname = "Антон Бальц";
    city[0].age = 41;
    city[0].gender = "М";

    city[1].subname = "Валентина Бальц";
    city[1].age = 38;
    city[1].gender = "Ж";

    city[2].subname = "Евгения Бальц";
    city[2].age = 14;
    city[2].gender = "Ж";

    city[3].subname = "Петр Иванов";
    city[3].age = 57;
    city[3].gender = "М";

    city[4].subname = "Василий Курчатов";
    city[4].age = 34;
    city[4].gender = "М";

    city[5].subname = "Полина Неспатова";
    city[5].age = 24;
    city[5].gender = "Ж";

    city[6].subname = "Генадий Ефимов";
    city[6].age = 26;
    city[6].gender = "М";



    int Men = 0,Women = 0;

    for (int i = 0; i < Ncity; ++i) {
        if (city[i].gender == "М"){
            Men++;
        } else {
            Women++;
        }
    }

    for (int i = 0; i < Ncity; ++i) {
        if (Women > Men){
            if (city[i].gender == "М"){
                std::cout << city[i].subname << "\n";
                std::cout << city[i].age << "\n";
                std::cout << city[i].gender << "\n";
            }
        } else {
            if (city[i].gender == "Ж"){
                std::cout << city[i].subname << "\n";
                std::cout << city[i].age << "\n";
                std::cout << city[i].gender << "\n";
            }
        }
    }
    std::cout << "\n\n";

    int MenAge = 0;
    float SrMenAge = 0;

    for (int i = 0; i < Ncity; ++i) {
        if (city[i].gender == "М")
            MenAge += city[i].age;
    }

    SrMenAge = MenAge / Men + (MenAge % Men )/(Men*1.0);

    for (int i = 0; i < Ncity; ++i) {
        if (city[i].age < SrMenAge) {
            std::cout << city[i].subname << "\n";
            std::cout << city[i].age << "\n";
            std::cout << city[i].gender << "\n";
        }
    }
    std::cout << "\n\n";

    int WomenAge = 0;
    float SrAge = 0;

    for (int i = 0; i < Ncity; ++i) {
        if (city[i].gender == "Ж")
            WomenAge += city[i].age;
    }

    SrAge = (1.0 * (WomenAge + MenAge)) / (Men + Women);

    for (int i = 0; i < Ncity; ++i) {
        if (city[i].age < SrAge) {
            std::cout << city[i].subname << "\n";
            std::cout << city[i].age << "\n";
            std::cout << city[i].gender << "\n";
        }
    }

    return 0;
}

int main(){
    dzOne();
    dzTwo();
    dzThree();
    dzFour();
    dzFive();
    dzSix();
    dzSeven();
}
