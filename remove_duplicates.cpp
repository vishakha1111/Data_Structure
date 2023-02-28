#include<iostream>
using namespace std;

int main()
{
	int n, arr[10], i, j;
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i] == arr[j])
			{
				while(j < n)
				{
					arr[j] = arr[j+1];
					j++;
				}
				
				--n;
			}
			
			else
			{
				continue;
			}
		}
	}

		for(i=0; i<n; i++)
		{
			cout<<arr[i]<<" ";
		}

	return 0;
}
