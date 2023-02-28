#include <iostream>
#include <math.h>
using namespace std;

int main()
 {
   int low, high, number, save, rem, count = 0;
   double result = 0.0;
   
   cin>>low;
   cin>>high;
   for (number = low + 1; number < high; ++number)
    {
      save = number;
      
      while (save != 0)
	   {
        save /= 10;
         ++count;
       }

      save = number;

      
      while (save != 0) {
         rem = save % 10;
         result += pow(rem, count);
         save /= 10;
      }

      if ((int)result == number)
	   {
        cout<<number<<" ";
      }

      count = 0;
      result = 0;
   }

   return 0;
}
