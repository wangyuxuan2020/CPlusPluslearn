#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
 
int n, k, r;
char s[] = "ATCG";
char str[100005];
 
int main()
{
	cin>>n>>k>>r;
	if(k > n) {printf("0\n"); return 0;}
	str[1] = s[r % 4];
	for (int i = 2; i <= n; i++){
		str[i] = s[(r * 6807 % 201701 + 2831) % 201701 % 4];
		r = (r * 6807 % 201701 + 2831) % 201701;
	}
	string s1;
	map<string, int>mp;
	int ans = 0, cnt = 1;
	while(cnt <= k) s1 = str[cnt++] + s1;
	mp[s1] = 1, ans++;
	for (int i = k + 1; i <= n; i++){
		s1.pop_back();
		s1 = str[i] + s1;
		if(!mp[s1]) ans++, mp[s1] = 1;
	}
	printf("%d\n", ans);
 
	return 0;
}

