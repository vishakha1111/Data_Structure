#include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
        
	cin>>n;
	int save=n;
	
	while(n!=0)
	{
		int num = n%10;
		int fact = 1;
		
		for(int i=num; i>0; i--)
		{
			fact=fact*i;
		}
		
		sum = sum +fact;
		n = n/10;
	}

	if(sum==save)
	{
		cout<<save<<" is a Strong Number";
	}
	else
	{
		cout<<save<<" is not a Strong Number";
	}
	return 0;
}
