//����С������ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"������������������0"<<endl;
	cin>>a>>b;
	if(a<b)
	{
		swap(a,b);
	}
	else
	{
		for(int c=a;c<=a*b;c=c*2)
		{
			if(c%b==0)
			{
				cout<<"��С�������ǣ�"<<c;
				break;
			}
		}
	}
	
	
	return 0;
}
