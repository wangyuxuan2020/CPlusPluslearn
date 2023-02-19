#include<bits/stdc++.h>
using namespace std;
int main()
{

	char f[500]={'\0'};
	bool s = false;
	char word[30]={'\0'},t[30]={'\0'};
	gets(f);
	int k = 0;
	for (int i =0 ; i<strlen(f)-1; i++) {
		if (f[i] != ' ') {
			t[k] = f[i];
			k++;
			if (f[i] == 'a') {
				s = true;
			}
			if (f[i+1] ==' ' || f[i+1] == '.') {
				t[k] = '\0';
				k=0;
				if (s == true && strlen(t)>strlen(word)) {
					strcpy(word, t);
				}
				s = false;
			}
		}
	}
	if (strlen(word)>0) {
		cout<<word<<endl;
	}else{
		cout<<"NO"<<endl;
	}


	return 0;
}

