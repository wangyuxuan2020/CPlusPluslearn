#include <iostream>
#include <ctime>
#include <cstdlib>
 
using namespace std;
 
int main ()
{
   int i,j,a=0; 
   srand( (unsigned)time( NULL ) );
   for( i = 0; i < 1000; i++ )
   {
      j= rand()%40;
      if(j%2!=0)
      {
      	a=a+1;
	  }
   }
 	cout<<"ÆæÊýÓÐ£º"<<a;
 	
 
   return 0;
}
