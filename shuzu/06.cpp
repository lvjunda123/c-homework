#include<iostream>
using namespace std;
int main(){
	int arr[11]={};
	for(int a=0;a<10;a++){
		cin>>arr[a];
	}
	int x;
	cin>>x;
	arr[10]=x;
	for(int d=0;d<=11-1-1;d++){
		for(int m=0;m<=11-1-1-d;m++){
			int t=0;
			if(arr[m]>arr[m+1]){
				t=arr[m];
				arr[m]=arr[m+1];
				arr[m+1]=t;
			}
		}
	}
	for(int c=0;c<11;c++){
		cout<<arr[c]<<" ";
	}
	return 0;
}
