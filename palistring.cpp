#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char name[100];
	cin>>name;
	
	int i, j=strlen(name)-1;
	bool x=false;
	
	for(int i=0; i<=j; i++)
	{
		if(name[i] == name[j-i] );
		{
			bool x = true;
			continue;
		}
		
	if(x)
	cout<<"String is Palindrome";
	else
	cout<<"String is not Palindrome";
	
	}
	
	return 0;
}

