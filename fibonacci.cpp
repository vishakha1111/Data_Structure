#include<iostream>
using namespace std;

int main()
{
	int n;
	int a = 0, b = 1, sum = 0;
	cin>>n;
	
	while(sum<=n)
	{
		cout<<sum<<" ";
		a = b;
		b = sum;
		sum = a+b;
		
	}
	
	return 0;
}
