#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	double x1,x2;
	a=2,b=24,c=7;
	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	cout<<x1<<" "<<x2<<endl;
	
	
	
	//forѭ����
	for (a=0;a<1000;a=a+2)
	{
		cout<<a<<endl;
	}	
	//whileѭ������ѭ���鷳������������ѭ���� 
	int l=1;
	while(l<1000)
		{
			cout<<l<<endl;
			l=l+2;
		}
		
		
   int e = 1;
   do
   {
       cout << "e ��ֵ��" << e << endl;
       e = e + 2;
   }while( e < 1000 );
 
		
		
		
		
		
	
	return 0;
}
