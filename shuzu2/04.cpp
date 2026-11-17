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
		int min=arr[0][0];
		int m1=0,m2=0;
		for(int f=0;f<m;f++){
			for(int f1=0;f1<n;f1++){
				if(arr[f][f1]<min){
					min=arr[f][f1];
					m1=f,m2=f1;
				}
			}
		}
		cout<<m1<<" "<<m2<<endl;
	}
	return 0;
}
