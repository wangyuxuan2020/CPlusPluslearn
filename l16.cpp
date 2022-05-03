#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	string name;
	string xing;
	string ming;
	
	cout<<"输入你的姓：";
	cin>>xing;
	
	cout<<"输入你的名：";
	cin>>ming;
	
	name=xing+ming;
	cout<<"你好："<<name<<endl;
	
	a=name.size();
	cout<<"你的名字有:"<<a<<"位";
	
	return 0;
}
