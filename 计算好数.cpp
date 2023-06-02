#include<bits/stdc++.h>
using namespace std;
bool gen(int a)
{
	int s[32];
	int sum=0, cnt=0;
	for(int i=0;a>0;i++)
	{
		s[i]= a%2;
		a=a/2;
		if(s[i]== 1)
		{
			sum++;
		}	
		else
		{
			cnt++;
		}
	} 
	if(sum>cnt)
	{
		return true;
	}else
	{
		return false;
	}

}
int main()
{
	int n,su=0;
	
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		if(gen(i))
		{
			su++;
		}
	 } 
	cout<<su;
	 
	return 0;
}

