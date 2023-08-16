#include<bits/stdc++.h>
using namespace std;
int sum;
void ng(int n)
{
	if(n%2==0)
	{
		sum++;
		n=n/2;
		ng(n);
	}
	else
	{
		return ;
	}
 } 
int main()
{
	int n;
	cin>>n;
	ng(n);
	cout<<sum;
	


	return 0;
}

