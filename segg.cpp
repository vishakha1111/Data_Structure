#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[7];
	
	for(int k=0; k<n; k++)
	{
		cin>>arr[k];
		
	}
	//int arr[7]={1,0,1,1,0,0,1};
	
		
		cout<<endl;
	int temp[7];
	int f_item =0;
	int l_item =6;
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]==0)
		{
			temp[f_item]=0;
			f_item++;
		}
		
		if(arr[i]==1)
		{
			temp[l_item]=1;
			l_item--;
		}
	}	
	
	for(int i=0; i<n; i++)
	{
		cout<<temp[i]<<" ";
	}
	return 0;
	
}

