#include<bits/stdc++.h>
using namespace std;
struct stu
{
	int d;
	int a;
	int b;
	int c;
}w[310];
int n,sum[310];
bool compare(int a,int b)
{
	if(a>b)
	{
		swap(a,b);
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i].a>>w[i].b>>w[i].c;
		sum[i]=w[i].a+w[i].b+w[i].c;
		w[i].d=i;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(sum[i]<sum[j])
			{
				swap(sum[i],sum[j]);
				swap(w[i].d,w[j].d);
			}
			else if(sum[i]==sum[j])
			{
				if(w[i].a>w[j].a)
				{
					swap(w[i].d,w[j].d);
				}else if(w[i].d==w[j].d)
				{
					if(w[i].d<w[i].d)
					{
						swap(w[i].d,w[j].d);
					}
				}
			}
		}
	}
	for(int i=1;i<=5;i++)
	{
		cout<<w[i].d<<' '<<sum[i]<<endl;	
	} 


	return 0;
}

