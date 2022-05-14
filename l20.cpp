#include<bits/stdc++.h>
using namespace std;
const int may=10;

int main()
{
	int A[may]={0,0,0,0,0,0,0,0,0,0};
	int *b;
	b=A;
	for(int i=0;i<may;i++)
	{
		*b=*b+i;
		cout<<A[i];
		b++;
	}	
	
	return 0;
}
