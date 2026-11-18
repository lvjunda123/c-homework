/*#include <iostream>
using namespace std;
int main() {
	int m, n;
	int a[50][50];
	int i, j, k, x, y, f;
	cin >> m >> n;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	f = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			x = 1;
			for (k = 0; k < n; k++) {
				if (a[i][k] > a[i][j]) {
					x = 0;
				}
			}
			y = 1;
			for (k = 0; k < m; k++) {
				if (a[k][j] < a[i][j]) {
					y = 0;
				}
			}
			if (x == 1 && y == 1) {
				cout << i << " " << j << endl;
				f = 1;
				break;
			}
		}
	}
	if (f == 0) {
		cout << "No" << endl;
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
		int arr[100][100];
		for(int a1=0;a1<m;a1++){
			for(int a2=0;a2<n;a2++){
				cin>>arr[a1][a2];
			}
		}
		int flag=1;
		int had=0;
		for(int b1=0;b1<m;b1++){
			for(int b2=0;b2<n;b2++){
				for(int f=0;f<m;f++){
					if(arr[f][b2]<arr[b1][b2]){
						flag=0;
					}
				}
				for(int f=0;f<n;f++){
					if(arr[b1][f]>arr[b1][b2]){
						flag=0;
					}
				}
				if(flag==1){
					cout<<b1<<" "<<b2<<endl;
					had=1;
				}
			}
		}
		if(had==0){
			cout<<"No"<<endl;
		}
	}
	return 0;
}
