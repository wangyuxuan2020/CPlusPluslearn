#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[10],max,min;
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9];
	max=a[0];
	min=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
		
		
	}	
	cout<<max<<endl;
	cout<<min<<endl;
	
	
	return 0;
}
