#include<bits/stdc++.h>
using namespace std;
//命名新函数change可交换值 

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
   cout << "交换前，a 的值：" << a << endl;
   cout << "交换前，b 的值：" << b << endl;
   change(a, b);
 
   cout << "交换后，a 的值：" << a << endl;
   cout << "交换后，b 的值：" << b << endl;
 
	
	
	return 0;
}
