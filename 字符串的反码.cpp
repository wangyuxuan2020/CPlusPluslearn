#include<bits/stdc++.h>
using namespace std;

int main() {
	char a[100];
	gets(a);
	for (int i=0; a[i] != '\0'; i++) {
		if (a[i]>='A' && a[i]<='Z') {
			a[i] ='Z' - (a[i] - 'A');
		}else if (a[i]>='a' && a[i]<='z') {
			a[i] ='z' - (a[i] - 'a');
		}
		cout<<a[i];
	}
}
