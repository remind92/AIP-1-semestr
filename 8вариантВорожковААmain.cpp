
// задача 1H
/*#include <iostream>

int main()
{
    double x,y;

    std :: cout << "x = ";
    std :: cin >> x;

    if(x>3)
    {
        y =2*x-10;
        std :: cout << "y = " << y << std :: endl;
    }

    else if(x<3)
    {
        y = (2*x+1)*(2*x+1) -1;
        std :: cout << "y = " << y << std :: endl;
    }

    else
    {
        y = 10;
        std :: cout << "y = " << y << std :: endl;
    }

    return 0;
}

*/



// задача 1A
/*
#include <iostream>

int main()
{
    int x,y;

    std :: cout << "x = ";
    std :: cin >> x;

    if(x>0)
    {
        y =2*x-10;
        std :: cout << "y = " << y << std :: endl;
    }

    else if(x<0)
    {
        y = 2* abs(x) -1;
        std :: cout << "y = " << y << std :: endl;
    }

    else
    {
        y = 0;
        std :: cout << "y = " << y << std :: endl;
    }

    return 0;
}
*/


// задача 2З
/*
#include <iostream>
#include <cmath>


int main()
{
    float x,y;

    std :: cout << "x = ";
    std :: cin >> x;
    std :: cout << "y = ";
    std :: cin >> y;

    bool zona1 = (x*x+y*y <=1);
    bool zona2 = (y >= x-1);
    bool zona3 = (x >=0);
    bool zona4 = (y <= 1);

    if((zona1 && zona3) || (zona3 && zona2 && zona4) )
    {
        std :: cout << "Popal" << std :: endl;
    }
    else
    {
        std :: cout << "Ne popal" << std :: endl;
    }
    return 0;
}
*/


//задача 3б
/*
#include <iostream>
#include <cmath>


int main()
{
    float x,y;

    std :: cout << "x = ";
    std :: cin >> x;
    std :: cout << "y = ";
    std :: cin >> y;

    bool zona1 = (x*x+y*y <=1);
    bool zona2 = (y <= x/2);

    if(zona1 && zona2)
    {
        std :: cout << "Popal" << std :: endl;
    }
    else
    {
        std :: cout << "Ne popal" << std :: endl;
    }
    return 0;
}
*/


