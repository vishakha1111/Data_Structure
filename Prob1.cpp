#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int count;
	int problemcount = 0;
	
	for(int i=0; i<n; i++)
	{
		count = 0;
		for(int j=0; j<3; j++)
		{
			int num;
			cin>>num;
			if(num==1)
			{
			count++;
			}	
		}	
		if(count>=2)
		{
				problemcount++;
		}		
}
	cout<<problemcount<<endl;
	return 0;
}
