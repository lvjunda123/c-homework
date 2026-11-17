#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
		int arr[50][50];
		int arr2[50][50];
		for(int h=0;h<m;h++){
			for(int l=0;l<n;l++){
				cin>>arr[h][l];
			}
		}
		for(int h=0;h<m;h++){
			for(int l=0;l<n;l++){
				arr2[l][h]=arr[h][l];  //注意将有值的赋值给未赋值的
			}
		}
		for(int h=0;h<n;h++){ //注意调换h l的边界，因为行和列调换了
			for(int l=0;l<m;l++){
				cout<<arr2[h][l]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
	
}
