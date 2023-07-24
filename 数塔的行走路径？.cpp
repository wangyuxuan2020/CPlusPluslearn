#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[110][110];
	int q[110][2];
	int n;
	int x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>a[i][j];
		}
	 } 
	 for(int i=n-1;i>=1;i--)
	 {
	 	for(int j=1;j<=i;j++)
	 	{
	 		a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
		 }
	 	
	 }
	 q[1][0]=1,q[1][1]=1;
	 for(int i=1;i<=n-1;i++)
	 {
	 	for(int j=1;j<=i;j++)
	 	{
	 		x=q[i][0];
	 		y=q[i][1];
	 		if(a[x+1][y]>a[x+1][y+1])
	 		{
	 			q[i+1][0]=x+1;
	 			q[i+1][1]=y;
			 }else
			 {
			 	q[i+1][0]=x+1;
				q[i+1][1]=y+1;
			 }
		 }
	 }
	for(int i=n;i>=1;i--)
	{
		cout<<q[i][0]<<','<<q[i][1];
		if(i!=1)
		{
			cout<<"->";
		}else
		{
			cout<<endl;
		}
	}
	cout<<a[1][1];
	return 0;
}

