#include<iostream>
using namespace std;
int main(){
	int arr[10]={};
	for(int i=0;i<10;i++){
		cin>>arr[i];
    }
	for(int j=9;j>0;j--){
		int t=0;
		t=arr[j];
		arr[j]=arr[j-1];
		arr[j-1]=t;
	}
	for(int c=0;c<10;c++){
		cout<<arr[c]<<" ";
	}
	return 0;
}	
