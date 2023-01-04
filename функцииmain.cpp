#include <iostream>


float Calc(float a, float b, int Op) {
    switch (Op)
    {
    case 1: {
        std::cout << a - b;
        break;
    }
    case 2: {
        std::cout << a * b;
        break;
    }
    case 3: {
        std::cout << a / b * 1.0;
        break;
    }
    default: {
        std::cout << a + b;
        break;
    }
    }
    return 0;
}

int IncTime(int H, int M, int S, int T) {
    S += H * 3600 + M * 60 + T;
    H = S / 3600;
    S -= H * 3600;
    M = S / 60;
    S -= M * 60;
    std::cout << H << ":" << M << ":" << S;

    return 0;
}

float ShiftRight3(float A, float B, float C) {
    float X;
    X = B;
    B = A;
    A = C;
    C = X;
    std::cout << A << ", " << B << ", " << C;

    return 0;

}

float funct(float x) {
    if (x > 1)
    {
        return (3*x - 7);
    }
    else if (x == 1)
    {
        return 3;
    }
    else {
        return 3 * abs(x + 2) - 7;
    }
}

int main() {
    float a, b;
    int Op;
    std::cin >> a >> b >> Op;
    Calc(a, b, Op);


    int H, M, S, T;
    std::cin >> H >> M >> S >> T;
    IncTime(H, M, S, T);


    float A, B, C;
    std::cin >> A >> B >> C;
    ShiftRight3(A, B, C);

    float X;
    std::cin >> X;
    std::cout << funct(X);
}
