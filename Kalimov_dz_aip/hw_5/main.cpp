#include <iostream>

/*Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
Мощность(гигакалорий в минуту, калорий в час, джоуль в час, эрг в секунду)*/

int main()
{
    int a;
    int b;
    int c;
    int d;

    std::cout<< "Enter" <<std::endl;  //"Enter grade in hour (gk/min)"
    std::cin>> a;
    std::cout<< "k/h= " << a*1.67*10000000*60 <<std::endl;
    std::cout<< "j/h= " << a*1.67*10000000*60*4.184<<std::endl;
    std::cout<< "erg/sec= " << a*1.67*10000000*60*4.184*10000000/360 <<std::endl;

    std::cout<< " " <<std::endl;

    std::cout<< "Enter grade in minute (k/h)" <<std::endl;   //"Enter grade in minute (g/min)"
    std::cin>> b;
    std::cout<< "gk/min= " << b*60 <<std::endl;
    std::cout<< "j/h= " << (3.14*b)/180 <<std::endl;
    std::cout<< "erg/sec= " << (3.14*a)/(180*60) <<std::endl;

    std::cout<< " " <<std::endl;

    std::cout<< "Enter radians in minute (j/h)" <<std::endl;   //"Enter radians in minute (rad/min)"
    std::cin >> c;
    std::cout<< "gk/min= " << ((c*180)/3.14)*60 <<std::endl;
    std::cout<< "k/h= " <<(c*180)/3.14 <<std::endl;
    std::cout<< "erg/sec= " << (3.14*a)/(180*60) <<std::endl;

    std::cout<< " " <<std::endl;

    std::cout<< "Enter radians in minute (erg/sec)" <<std::endl;   //"Enter radians in minute (rad/min)"
    std::cin >> d;
    std::cout<< "gk/min= " << ((c*180)/3.14)*60 <<std::endl;
    std::cout<< "k/h= " <<(c*180)/3.14 <<std::endl;
    std::cout<< "j/h= " << (3.14*a)/(180*60) <<std::endl;
}
