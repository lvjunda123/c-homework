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
		for(int a1=0;a1<n;a1++){
			for(int a2=0;a2<n;a2++){
				if(a1==a2||a1+a2==n-1){
					sum=sum+arr[a1][a2];
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
