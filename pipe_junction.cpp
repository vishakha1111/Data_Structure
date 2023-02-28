#include<iostream>
using namespace std;

int main()
{
	int N, M, R;
	cin>>N>>M>>R;
	
	int ArrN[N], ArrM[M];
	int sum1 = 0, sum2 =0;
	
	for(int i=0; i<N; i++)
	{
		cin>>ArrN[i];
		sum1 = sum1 + ArrN[i] - R;
	}
	
	for(int i=0; i<M; i++)
	{
		cin>>ArrM[i];
		sum2 = sum2 + ArrM[i] - R;
	}
	
	if(sum1 == sum2)
	cout<<"Balanced";
	
	if(sum1>sum2)
	cout<<sum2-sum1 - R;
	
	if(sum2>sum1)
	cout<<sum2 - sum1 + R;
	
	return 0;
	
}
