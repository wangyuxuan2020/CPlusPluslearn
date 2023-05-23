#include<bits/stdc++.h>
using namespace std;
struct stu
{
	int n;
	string s;
}w[110];
int c; 
bool cmp(stu n1,stu n2)
{
	if(n1.s.size()>n2.s.size())
	{
		return true;
	}else if(n1.s.size()==n2.s.size()&&n1.s>n2.s)
	{
		
		return true;
	}else if(n1.s.size()==n2.s.size()&&n1.s==n2.s&&n1.n>n2.n)
	{
		return true;
	}
	return false;
}
int main()
{
	cin>>c;
	for(int i=1;i<=c;i++)
	{
		cin>>w[i].n;
		cin>>w[i].s;
	}
	sort(w+1,w+1+c,cmp);
	for(int i=1;i<=c;i++)
	{
		cout<<w[i].n<<' '<<w[i].s<<endl;
	}


	return 0;
}

