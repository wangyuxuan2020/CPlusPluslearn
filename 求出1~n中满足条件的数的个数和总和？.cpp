#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0&&i%3!=0)
		{
			cnt++;
			sum=sum+i;
		}
	}
	cout<<cnt<<endl<<sum;

	return 0;
}

