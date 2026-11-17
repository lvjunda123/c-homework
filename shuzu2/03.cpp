#include<iostream>
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
	int max=arr[0][0];
	for(int f=0;f<m;f++){
		for(int f1=0;f1<n;f1++){
			if(arr[f][f1]>max){
				max=arr[f][f1];
			}
		}
	}
	cout<<max;
}
	return 0;
}
