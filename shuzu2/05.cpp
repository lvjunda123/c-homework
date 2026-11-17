#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n;
	while(cin>>n){
	int arr[50][50];
	for(int h=0;h<n;h++){
		for(int l=0;l<n;l++){
			cin>>arr[h][l];
		}
	}
	for(int h=0;h<n;h++){
		for(int l=0;l<n;l++){
			printf("%3d",2*arr[l][h]);
		}
		cout<<endl;
	}
}
    return 0;
	
}
