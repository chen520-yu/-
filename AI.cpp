#include <bits/stdc++.h> 
#define N 550
using namespace std;
int a[100][100];
int x,y;
int n;
int main() {
	cin >> x >> y;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			cin >> a[i][j];
		}
	}
	cin >> n;
	while(n--){
		string cmd;
		int x1,x2,y2,y1;
		cin >> cmd;
		if(cmd == "SR"){
			cin >> x1 >> x2;
			for(int j=1;j<=y;j++){
				swap(a[x1][j],a[x2][j]);
			}
		}
		if(cmd == "SC"){
			cin >> y1 >> y2;
			for(int i=1;i<=x;i++){
				swap(a[i][y1],a[i][y2]);
			}
		}
		if(cmd == "DR"){
			cin >> x1;
			for(int i=x1;i<x;i++){
				for(int j=1;j<=y;j++){
					a[i][j] = a[i+1][j];
				}
			}
			x--;
		}
		if(cmd == "DC"){
			cin >> y1;
			for(int i=1;i<=x;i++){
				for(int j=y1;j<y;j++){
					a[i][j] = a[i][j+1];
				}
			}
			y--;
		}
		if(cmd == "IR"){
			cin >> x1;
			x++;
			for(int i=x;i>=x1+1;i--){
				for(int j=1;j<=y;j++){
					a[i][j] = a[i-1][j];
				}
			}
			for(int j=1;j<=y;j++) a[x1][j] = 0;
		}
		if(cmd == "IC"){
			cin >> y1;
			y++;
			for(int i=1;i<=x;i++){
				for(int j=y;j>=y1+1;j++){
					a[i][j] = a[i][j-1];
				}
			}
			for(int i=1;i<=x;i++) a[i][y1] = 0;
		}
	}
	
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

