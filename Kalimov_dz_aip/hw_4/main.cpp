#include <iostream>
#include <math.h>
/*Вычислите значение выражения:|x| + x^5, если x=−2. Ответ: -30*/

int main()
{
    float x;
    float c;

    std::cout<< "|x| + x^5, if x=−2. Answer: -30" <<std::endl;
    std::cout<< "Enter number" <<std::endl;
    std::cin>> x ;
    c=abs(x)+(x*x*x*x*x);

    std::cout<< "|x| + x^5= " << c <<std::endl;
}
