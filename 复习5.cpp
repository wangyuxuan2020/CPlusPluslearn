#include<bits/stdc++.h>
using namespace std;
char d[5][10]={"r","y","bl","w","b"};
int main()
{
	int a,b,c,e=0;
	for(a=0;a<5;a++)
	{
		for(b=0;b<5;b++)
		{
			for(c=0;c<5;c++)
			{
				e=e+1;
				cout<<d[a]<<" "<<d[b]<<" "<<d[c]<<endl;
			}
		}
	}
	cout<<"一共有"<<e<<"组";
	return 0;
}
