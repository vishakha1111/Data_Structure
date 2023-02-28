#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[50];
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	sort(arr, arr+n);
	
	cout<<"Second Smallest Element"<<" "<<arr[1];
}
