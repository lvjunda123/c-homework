#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100]={};
	int a=0;
	for(;a<n;a++){
		cin>>arr[a];
	}
	int count[10]={};
	for(int x=0;x<100;x++){
		arr[a]=x;
		count[x]++;
	}
	int max=count[0];
	int b=1;
	for(;b<11;b++){
		if(count[b]>max){
			max=count[b];
		}
	}
	cout<<count[b];
	return 0;
}
