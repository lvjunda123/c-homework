#include<iostream>
using namespace std;
int main(){
	int arr[10]={};
	for(int a=0;a<10;a++){
		cin>>arr[a];
	}
	int x;
	cin>>x;
	for(int d=0;d<=10-1-1;d++){
		for(int m=0;m<=10-1-1;m++){
			int t=0;
			if(arr[m]>arr[m+1]){
				t=arr[m];
				arr[m]=arr[m+1];
				arr[m+1]=t;
			}
		}
	}
	for(int c=0;c<10;c++){
		if(arr[c]!=x){
			cout<<arr[c]<<" ";
		}
	}
	return 0;
}
