#include<iostream>
using namespace std;
int main(){
	int arr[10]={};
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	int count=sizeof(arr)/sizeof(arr[0]);
	for(int a=0,z=count-1;a<z;a++,z--){
		int t=0;
		t=arr[a];
		arr[a]=arr[z];
		arr[z]=t;
	}
	for(int c=0;c<10;c++){
		cout<<arr[c]<<" ";
	}
}


