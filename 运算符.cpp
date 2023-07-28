#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool a=true,b=false,c=true,d=false;
	bool i;
	//异或：相同为真（1）不同为假（0）
	i=a^b;
	cout<<"异或：相同为真"<<i<<endl;
	i=a^c;
	cout<<"不同为假"<<i<<endl;
	//或：有真则真（1）同假则假（0）
	i=a|b;
	cout<<"或：有真则真"<<i<<endl;
	i=b|d;
	cout<<"同假则假"<<i<<endl;
	// 非：取反
	i=!b;
	cout<<" 非：取反"<<i<<endl;
	//与：有假则假（0）同真则真（1）
	i=a&b;
	cout<<"与：有假则假"<<i<<endl;
	i=a&c; 
	cout<<"同真则真"<<i<<endl;
	 


	return 0;
}

