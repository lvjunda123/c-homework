#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
	int arr[100][100];
	for(int row=0;row<m;row++){
		for(int column=0;column<n;column++){
			cin>>arr[row][column];
		}
	}
	for(int row=0;row<m;row++){
		for(int column=0;column<n;column++){
			printf("%3d",arr[row][column]);
		}
		cout<<endl;
	}
	}
	return 0;
}
