#include<iostream>
#include<cstdio>
using namespace std;
int main( ){
	int m,n;
	int arr1[50][50];
	int arr2[50][50];
	while(cin>>m>>n){
	int c1=0;
	int c3=0;
	for(;c1<m;c1++){
		for(int c2=0;c2<n;c2++){
			cin>>arr1[c1][c2];
		}
	}
	for(;c3<m;c3++){
		for(int c4=0;c4<n;c4++){
			cin>>arr2[c3][c4];
		}
	}
	for(int row=0;row<m;row++ ){
		for(int column=0;column<n;column++){
			printf("%3d",arr1[row][column]+arr2[row][column]);
		}
		cout<<endl;
	}
	}
	return 0;
}
