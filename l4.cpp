#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int a,b,c,d
//	cin >>a>>b>>c>>d>>e;
	int a[5];
	cout<<"ÇëÊäÈë5¸öÖµ£º\n";
	cin >>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	
	int j = 0;
	for(int i = 0;i < 5; i++)
	{
		j = i+1;
		for(; j<5; j++)
		{
			if(a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}

	cout<<a[0]<<"<"<<a[1]<<"<"<<a[2]<<"<"<<a[3]<<"<"<<a[4];
	
	return 0;
}
