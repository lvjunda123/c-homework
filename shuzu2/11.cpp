#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int arr[50][50];
		for(int a1=0;a1<n;a1++){
			for(int a2=0;a2<n;a2++){
				cin>>arr[a1][a2];
			}
		}
		int sum=0;
		int sum1=0;
		int maxx=arr[0][0];
		for(int a1=0;a1<n;a1++){
			for(int a2=0;a2<n;a2++){
				if(a1==a2){
					sum=sum+arr[a1][a2];
				}
				if(a1+a2==n-1){
					sum1=sum1+arr[a1][a2];
				}
				if(arr[a1][a2]>maxx){
					maxx=arr[a1][a2];
				}
			}
		}
		cout<<"主对角线之和="<<sum<<endl;
		cout<<"副对角线之和="<<sum1<<endl;
		cout<<"max="<<maxx<<endl;
	}
	return 0;
}
