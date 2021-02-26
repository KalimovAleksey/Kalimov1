#include <iostream>
/*Пользователь вводит три числа. Найдите среднее арифметическое этих чисел, а также разность удвоенной
  суммы первого и третьего чисел и утроенного второго числа.
*/
int main()
{
    float a;
    float b;
    float c;
    float S;
    float R;
    std::cout<< "Enter three numbers" <<std::endl;
    std::cin >> a >> b >> c;
    S=(a+b+c)/3;
    std::cout<< "Srednee= " << S <<std::endl;
    R=((a+c)*2)-(b*3);
    std::cout<< "Raznost'= " << R <<std::endl;

}
