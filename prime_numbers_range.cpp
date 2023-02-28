#include <iostream>
using namespace std;

int main()
{
	int a, b, i, flag=0, sum =0;

	cin >> a;

	cin >> b;

	while (a < b)
	{
	flag = 0;
	for(i = 2; i <= a/2; ++i)
	{
		if(a % i == 0)
		{
		flag = 1;
		break;
	}
	
 	}
 	a++;
 

if (flag == 0)
{
	sum = sum + a;

}
}
return sum;

}


