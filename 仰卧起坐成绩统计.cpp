#include<bits/stdc++.h>
using namespace std;
struct node{
	int cnt;
	char grade;
	
}a[110];
int n,x;
bool cmp(node n1,node n2)
{
	if(n1.cnt>n2.cnt||n1.cnt==n1.cnt&&n1.grade<n2.grade)
	{
		return true;
	}
	return false;
}
int main()
{
	cin>>n;
	string t="0ABCDEFG";
	for(int i=1;i<=6;i++)
	{
		a[i].grade=t[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x>=60)
		{
			a[1].cnt++;
		}else if(x>=50)
		{
			a[2].cnt++;
		}else if(x>=40)
		{
			a[3].cnt++;
		}else if(x>=30)
		{
			a[4].cnt++;
		}else if(x>=20)
		{
			a[5].cnt++;
		}else if(x>=10)
		{
			a[6].cnt++;
		}
	}
	sort(a+1,a+7,cmp);
	for(int i=1;i<=6;i++)
	{
		cout<<a[i].grade<<':'<<a[i].cnt<<endl;
	 } 

	return 0;
}

