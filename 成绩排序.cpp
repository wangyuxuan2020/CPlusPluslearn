#include<bits/stdc++.h>
using namespace std;
struct stu
{
	string num;
	int score;
	int chinese;
}a[310];
int n;
bool cmp(stu n1,stu n2)
{
	if(n1.score>n2.score||n1.score==n2.score&&n1.chinese>n2.chinese||n1.score==n2.score&&n1.chinese==n2.chinese&&n1.num<n2.num)
	{
		return true;
	}else
	{
		return false;
	}
}
int main()
{
	int x,z,y;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s>>x>>y>>z;
		a[i].num=s;
		a[i].chinese=x;
		a[i].score=x+y+z;
	} 
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++)
	{
		cout<<a[i].num<<' '<<a[i].score<<' '<<a[i].chinese<<endl;
    } 
	
	return 0;
}

