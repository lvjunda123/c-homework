#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
		int arr[50][50];
		for(int h=0;h<m;h++){
			for(int l=0;l<n;l++){
				cin>>arr[h][l];
			}
		}
		for(int h=0;h<m;h++){
			for(int l=0;l<n;l++){
				printf("%3d",2*arr[h][l]);
			}
			cout<<endl;
		}
	}
	return 0;
	
}
