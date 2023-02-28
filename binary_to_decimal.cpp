#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int result=0, rem, i=0;
	
	while(n != 0)
	{
		rem  = n %10;
		
		result = result + rem*pow(2, i);
		n = n/10;
		++i;
	}
	
	cout<<result;
	return 0;
}
