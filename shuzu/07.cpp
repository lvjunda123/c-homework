#include<iostream>
using namespace std;
int main(){
	int arr[10]={};
	for(int a=0;a<10;a++){
		cin>>arr[a];
	}
	int max=arr[0];
	for(int b=0;b<10;b++){
		if(arr[b]>max){
			max=arr[b];
		}
	}
	cout<<max;
	return 0;
}
