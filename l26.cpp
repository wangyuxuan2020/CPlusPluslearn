#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[3];
	for(int i=0; i <3; i++)
	{
		cin>>a[i];
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = i+1;j < 3; j++)
		{
			if(a[i] < a[j])
			{
				swap(a[i], a[j]);
			}
		}
		cout<<a[i];
		
		
	}
	
	
	
	return 0;
}
