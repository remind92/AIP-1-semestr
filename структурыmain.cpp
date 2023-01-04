#include <iostream>//вариант 8
#include <stdlib.h>
#include <cmath>


const int N = 5;

struct time{
    int hour;
    int minute;
    int second;
};

struct numeric{
    float whole;
    float imaginary;
};

struct robot{
    float size;
    float weight;
    float speed;
};

struct sensor{
    float min;
    float max;
    float fault;
    float speed;
};

struct car{
    float speed;
    float time;
    float number;
};

float dzOne(struct time One){

    return 1.0*(One.hour*60)+One.minute+(One.second/60);
}

struct numeric dzTwo(struct numeric One){
    struct numeric Two;
    Two.whole = sqrt(One.whole * One.whole * 1.0);
    Two.imaginary = sqrt(One.imaginary * One.imaginary * 1.0);

    return Two;
}

struct robot dzThree(struct robot One[N]){
    float minSize = One[0].size;
    int iMin = 0;
    for (int i = 0; i < N; ++i) {
        if(minSize > One[i].size){
            minSize = One[i].size;
            iMin = i;
        }
    }

    return One[iMin];
}

struct sensor dzFour(struct sensor One[N]){
    float maxDio = One[0].max - One[0].min;
    int iMin = 0;
    for (int i = 0; i < N; ++i) {
        if(maxDio < (One[i].max - One[i].min)){
            maxDio = One[i].max - One[i].min;
            iMin = i;
        }
    }

    return One[iMin];
}

float dzFive(struct car One){
    return One.speed*One.time* 1.0;
}

int main(){
    struct time OneTime;

    OneTime.hour = rand() % 100;
    OneTime.minute = rand() % 100;
    OneTime.second = rand() % 100;

    std::cout << dzOne(OneTime)<< " Минут\n";


    std::cout << std::endl;


    struct numeric Two;

    Two.whole = (rand() % 100 - 50 ) * 1.0;
    Two.imaginary = (rand() % 100 - 50) * 1.0;


    std::cout << dzTwo(Two).whole <<" Целая часть\n" << dzTwo(Two).imaginary <<" Мнимая часть\n";


    std::cout << std::endl;


    robot robotView[N];
    for (int i = 0; i < N; ++i) {
        robotView[i].weight = rand() % 50 * 1.0;
        robotView[i].size = rand() % 50 * 1.0 + 10;
        robotView[i].speed = rand() % 51 * 1.0 ;
    }
    robot minSize = dzThree(robotView);

    std:: cout << "Масса " << minSize.weight << "\n";
    std:: cout << "Габориты " << minSize.size << "\n";
    std:: cout << "Максимальная скорость " << minSize.speed << "\n";



    std::cout << std::endl;


    sensor SensorView[N];
    for (int i = 0; i < N; ++i) {
        SensorView[i].min = rand() % 20 * 1.0;
        SensorView[i].max = rand() % 20 * 1.0 + 20;
        SensorView[i].fault = rand() % 15 * 1.0 ;
        SensorView[i].speed = rand() % 50 * 1.0 + 20;
    }
    sensor Four = dzFour(SensorView);
    std::cout << "Минимальное значение " << Four.min <<"\n" << "Максимальное значение " << Four.max <<"\n"
    << "Погрешность " << Four.fault <<"%\n"<< "Скорость срабатывания " << Four.speed <<"\n";


    std::cout << std::endl;


    car model;
    model.speed= rand() % 50 * 1.0 + 10;
    model.time= rand() % 50 * 1.0 + 10;
    model.number= rand();
    std::cout << "Путь = " <<dzFive(model);

    return 0;
}
