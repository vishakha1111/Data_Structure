#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int result=0, rem, save, power;
	
	save = n;
	
	while(n!=0)
	{
		rem = n%10;
		result = result + pow(rem, n);
		n = n/10;
		
        power = pow(rem, n);
        result += power;
        n /= 10;
	}
	
	if(save == result)
	cout<<"Armstrong Number";
	else
	cout<<"Not a Armstrong Number";
	
	return 0;
}
