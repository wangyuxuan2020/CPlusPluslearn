#include<bits/stdc++.h>
using namespace std;
//�����º���change�ɽ���ֵ 

void change(int &a, int &b)
{				
    int c;
    c=a;
    a=b;
    b=c;
    
    return;
}
int main()
{
	 int a ;
	 int b ;
 	cin>>a>>b;
   cout << "����ǰ��a ��ֵ��" << a << endl;
   cout << "����ǰ��b ��ֵ��" << b << endl;
   change(a, b);
 
   cout << "������a ��ֵ��" << a << endl;
   cout << "������b ��ֵ��" << b << endl;
 
	
	
	return 0;
}
