#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[110],z=1;
	queue<int>q;
	int x,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		q.push(x);
	}
//	for(int i=0;i<n;i++)
//	{
//		if(z%2!=0)
//		{
//			a[i]=q.front();
//			q.pop();
//			z++;	
//		}
//		else
//		{	
//			q.push(q.front() );
//			q.pop();
//			i--;
//			z++; 
//		}
//		
//	}
	
	vector<int> v;
	while(!q.empty())
	{
			v.push_back(q.front());
			q.pop();
			
			q.push(q.front());
			q.pop();	
	}
	
	
	for(int i=0;i<n;i++)
	{
		//cout<<a[i]<<' ';
		cout<<v[i] << ' ';
	}


	return 0;
}

