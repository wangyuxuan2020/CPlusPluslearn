#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]= {0,0,1,1,1};
	string s[5]= {"bai","hei","huang","lan","hong"};
	do
	{
		for(int i = 0;i<5;i++)
		{
			if(a[i])
			{
				cout<<s[i]<<" ";
			}
			cout<<endl;
		}
	}
	while(next_permutation(a,a+5));
	
	return 0;
}
