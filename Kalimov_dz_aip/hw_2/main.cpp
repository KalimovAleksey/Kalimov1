#include <iostream>

//Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:Трапеция

int main()
{

    float a;
    float b;
    float h;
    float S;
    std::cout<< "Enter the upper base (a), bottom base(b) and height (h)" <<std::endl;
    std::cin >> a >> b >> h;
    S=((a+b)/2)*h;
    std::cout<< "S= " << S <<std::endl;

}
