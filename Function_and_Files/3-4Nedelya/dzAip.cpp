#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

void ExOne();// Задание H
void ExTwo();// Задание A
void ExThree();// Задание З
void ExFour();// Задание Б

int main()
{
    ExOne();
    ExTwo();
    ExThree();
    ExFour();
}

void ExOne() {

    std::ofstream OF;
    float x;
    float y = 0;

    std::cin >> x;

    OF.open("ExOne.txt", std::ios::out);
    OF << "Дана функция y=f(x). Найти значение функции по x: \nВведённые переменные x=" << x << "\n";
    OF.close();

    if (x > 3)
        y = 2 * x - 10;
    else
    {
        if (x == 3)
            y = 10;

        else
        {
            if (x < 3)
                y = (2 * x + 1) * (2 * x + 1)-1;
        }
    }
    OF.open("ExOne.txt", std::ios::app);
    OF << "Ответ: \n    "<< y << "\n";
    OF.close();

    std::cout << "y=" << y << std::endl;
}
void ExTwo(){

    std::ofstream OF;
    float x;
    float y = 0;

    std::cin >> x;

    OF.open("ExTwo.txt", std::ios::out);
    OF << "Дана функция y=f(x). Найти значение функции по x: \nВведённые переменные x=" << x << "\n";
    OF.close();

    if (x > 0)
        y = 2 * x - 10;
    else
    {
        if (x == 0)
            y = 0;

        else
        {
            if (x < 0)
                y = 2 * abs(x) - 1;
        }
    }
    std::cout << "y=" << y << std::endl;
    OF.open("ExTwo.txt", std::ios::app);
    OF << "Ответ: \n    " << y << "\n";
    OF.close();
}
void ExThree() {
    std::ofstream OF;
        float r = 1;
        float x, y;
    std::cin >> x >> y;
        bool krug = (sqrt(x * x + y * y)<1)&& (x>0);
        bool linii = (y <= 1) && (x >= 0) && (y >= x - 1);

    OF.open("ExThree.txt", std::ios::out);
    OF << "Программа, которая принимает от пользователя координаты точки и определяет, попала ли точка в заштрихованную область  \nВведённые переменные x=" << x << " y=" << y << "\n";
    OF.close();

    OF.open("ExThree.txt", std::ios::app); 

    if (krug || linii) {
        OF << "Ответ:\n" << "       Да, входит в область определения функции.";
        std::cout << "      Yes, it is within the scope of the function definition. \n";
    }
    else {
        OF << "Ответ:\n" << "       Нет, не входит в область определения функции.";
        std::cout << "       No, it is not in the scope of the function. \n";
    }

    OF.close();
}
void ExFour(){
    std::ofstream OF;
    float r = 1;
    float x, y;
    
    std::cin >> x >> y;

    OF.open("ExFour.txt", std::ios::out);
    OF << "Программа, которая принимает от пользователя координаты точки и определяет, попала ли точка в заштрихованную область  \nВведённые переменные x=" << x << " y=" << y << "\n";
    OF.close();

    bool krug = sqrt(x * x + y * y)<1;
    bool linii = (y<x/2);

    OF.open("ExFour.txt", std::ios::app); 

    if (krug && linii) {
        OF << "Ответ:\n" << "       Да, входит в область определения функции.";
        std::cout << "      Yes, it is within the scope of the function definition. \n";
    }
    else {
        OF << "Ответ:\n" << "       Нет, не входит в область определения функции.";
        std::cout << "       No, it is not in the scope of the function. \n";
    }

    OF.close();
}