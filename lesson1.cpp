/***
�ж�����ƽ���㷨 
***/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"���������:"; 
	int b;
	scanf("%d", &b);
	
	int e =b%400;
	int d = b%4;
	if(d == 0)
	{
		if(e==0)
		{
			cout<<"ƽ��";
		}
        else
        {
			cout<<"����";
		}
	}
	else
	{
		cout<<"ƽ��"; 
		
	}
	
     return 0;	
}







