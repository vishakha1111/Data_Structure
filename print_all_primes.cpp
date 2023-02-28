#include<iostream>
using namespace std;

int main()
{
	int first, last, i, x;
	
	cin>>first;
	cin>>last;
	
	for(x = first + 1; x <= last-1; x++)
	{
		for(i=2; i<=x; i++)
		{
			if(x % i == 0)
			break;
		}
		
		if(x == i)
		cout<<x<< " ";
	}
	return 0;
}
