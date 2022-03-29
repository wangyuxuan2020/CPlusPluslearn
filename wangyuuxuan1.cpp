#include<bits/stdc++.h>
using namespace std;

//这是一个函数 
int add(int a, int b)
{
	int c  = a+b;
	return c;
}

double chu(double a, double b)
{
	double c =a/b;
	return c;

}

int main()
{
	int i = 0;
	double a,b,d;
	double c;
	float f = 1.2;
	
	cin >>a >>b >>d;
	cout <<"a/b= "<< chu(a,b) <<endl;
	
	c=a/b/d;
	cout<<"a/b/c="<< c<<endl; 
	
	return 0;
}
