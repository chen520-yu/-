#include <bits/stdc++.h> 
#define N 550
using namespace std;

int n;
int k;
int main() {
	cin >> n;
	while(n--){
		char a[1001];
		cin >> a;
		int len = strlen(a);
		bool flag = 0;
		for(int i=0;i<len/2;i++){
			if(a[i]!=a[len-i-1]) flag = 1;
		}
		if(flag) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
	return 0;
}
