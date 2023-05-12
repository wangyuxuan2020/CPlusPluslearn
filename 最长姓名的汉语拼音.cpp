#include<bits/stdc++.h>
using namespace std;
struct stu
{
	string m;
}a[1010];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		cin>>a[i].m;
	}
	for(int i=0;i<=n;i++)
	{
		if(a[i]<a[i+1])
		{
			swap(a[i],a[i+1]);
		}
	}

	return 0;
}

