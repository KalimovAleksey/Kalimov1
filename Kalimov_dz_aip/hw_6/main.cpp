#include <iostream>

/*Вводятся три целых числа. Наибольшее увеличить на 5, наименьшее уменьшить 3.*/

int main()
{
   int a;
   int b;
   int c;
   int m;

   std::cout<< "Enter the first number " <<std::endl;
   std::cin>> a;
   std::cout<< "Enter the second number " <<std::endl;
   std::cin>> b;
   std::cout<< "Enter the third number " <<std::endl;
   std::cin>> c;

   if(a > b) m = a;
      else m = b;
      if(c > m) m = c;

      std::cout << "Max+5= " << m+5 <<std::endl;

      if(a < b) m = a;
         else m = b;
         if(c < m) m = c;

         std::cout << "Min-3= " << m-3 <<std::endl;
}
