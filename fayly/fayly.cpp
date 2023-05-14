//8 вариант 
//задача 2d
/*
#include <iostream>
#include <fstream>

int main() { 
    std::ifstream file("music.mp3", std::ios::binary);
    if (file.is_open())
    {
        file.seekg(-35, std::ios::end);

        char tag[4];
        file.read(tag, 4);

        std::cout << "year: " << tag << std::endl;
    }
    else
        std::cout << "No found teg" << std::endl;

    file.close();

    return 0;
}
*/
//задача 3H
/*
#include <iostream>
#include <fstream>

float func(int i_par_ch, float x_min, float y)
{
    int i_znam = 7;
    int i_chisl = 1;

    y = -1 * (i_chisl / (i_znam * x_min));

    while (i_znam < i_par_ch)
    {
        if (i_znam < i_par_ch)
        {
            i_chisl++;
            i_znam++;
            y += i_chisl / (i_znam * x_min);
        }

        if (i_znam < i_par_ch)
        {
            i_chisl++;
            i_znam++;
            y -= i_chisl / (i_znam * x_min);
        }
    }
    return y;
}

int main()
{
    int x_min;
    int x_max;
    int i_par_ch;
    int tab;
    float x;
    float y = 0;

    std::fstream file_in("in.txt", std::ios::in);

    if (file_in.is_open())
        file_in >> x_min >> x_max >> i_par_ch >> tab;
    file_in.close();

    std::fstream file_out("out.txt", std::ios::out);

    if (file_out.is_open())
    {
        for (; x_min < x_max; x_min += tab)
        {
            file_out << x_min << "," << func(i_par_ch, x_min, y) << '\n';
        }
    }
    file_in.close();

    return 0;
}
*/

//задача 7
#include <iostream>
#include <fstream>
#include <string.h>

int main()
{
    std::string str1;
    std::string str2;
    std::string str3;
    int x;
    int y;
    int command;

    std::fstream file_out("out_kwadro.txt", std::ios::out);

    if (file_out.is_open())
    {
        for (int i = 0; i < 3; i++)
        {
            std::cin >> str1 >> str2 >> str3;
            file_out << str1 << " " << str2 << " " << str3 << '\n';
        }
    }
    file_out.close();

    std::fstream file_in("out_kwadro.txt", std::ios::in);

    if (file_in.is_open())
    {
        for (int i = 0; i < 3; i++)
        {
            file_in >> x >> y >> command;
            std::cout << x << "," << y << "," << command << std::endl;
        }
    }
    file_in.close();

    return 0;
}