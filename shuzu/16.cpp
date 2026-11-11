#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int arr[10]={};
	for(int a=0;a<10;a++){
		cin>>arr[a];
	}
	int sum=0;
	for(int o=0;o<10;o++){
		sum=sum+arr[o];
	}
	int count=sizeof(arr)/sizeof(arr[0]);
	double pj=(1.0*sum)/(1.0*count);
	for(int c=0;c<10;c++){
		if(arr[c]<pj&&arr[c]%2==0){
			cout<<arr[c]<<" ";
		}
	}
	return 0;
}
