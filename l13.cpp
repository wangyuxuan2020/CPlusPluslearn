#include<bits/stdc++.h>
using namespace std;
int main()
{
// 	int b,c,d,e,f,g,h,i,j,k;
// 	cout<<"请输入十个数字:";
//	cin>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k;
//	int a[10] = {b,c,d,e,f,g,h,i,j,k};
	int a[10];
	cout<<"请输入十个数字:";
	for(int i=0; i <10; i++)
	{
		cin>>a[i];
	}
	for(int i = 0; i < 10; i++)
	{
		for(int j = i+1;j < 10; j++)
		{
			if(a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
		cout<<a[i];
		if(i<9)
		{
			cout<<"<";
		}
		
	}
	

	return 0;	
}
