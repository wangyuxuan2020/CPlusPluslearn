#include<bits/stdc++.h>
using namespace std;
struct stu{
	int num;
	string w;
	int s;
}a[110];
int n;
int main()
{	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].num>>a[i].w>>a[i].s;
	}
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(a[j].s<a[j+1].s||a[j].s==a[j+1].s&&a[j].num>a[j+1].num)
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i].num<<' '<<a[i].w<<' '<<a[i].s<<endl;
	}
	
	return 0;
	
}

