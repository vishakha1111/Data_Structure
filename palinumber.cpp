#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int reverse=0, rem=0, number;
	
	number = n;
	
	while(n!=0)
	{
		rem = n%10;
		reverse = reverse*10 + rem;
		n= n/10;
	}
	
	if(number == reverse)
	cout<<"No. is Palindrome";
	else
	cout<<"No. is not a Palindrome";
	return 0;
}
