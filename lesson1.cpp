/***
判断闰年平年算法 
***/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"请输入年份:"; 
	int b;
	scanf("%d", &b);
	
	int e =b%400;
	int d = b%4;
	if(d == 0)
	{
		if(e==0)
		{
			cout<<"平年";
		}
        else
        {
			cout<<"闰年";
		}
	}
	else
	{
		cout<<"平年"; 
		
	}
	
     return 0;	
}







