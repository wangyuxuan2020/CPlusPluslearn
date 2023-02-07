#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,x,y,z;
	x=y=z=0; 
	cin>>n;
	int a[110][4];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cin>>a[i][j]; 
		}
	}
	for(int i=1;i<=n;i++)
	{
		x+=a[i][1];
		y+=a[i][2];
		z+=a[i][3];
	} 
	cout<<fixed<<setprecision(1);
	cout<<x/n<<' '<<y/n<<' '<<z/n;
	return 0;
}

