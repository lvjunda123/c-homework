#include<iostream>
using namespace std;
int main(){
	int arr[10]={};
	for(int a=0;a<10;a++){
		cin>>arr[a];
	}
	int sum=0;
	for(int o=0;o<10;o++){
		if(arr[o]%2==0){
			sum=sum+arr[o];
		}
	}
	cout<<sum<<endl;
	return 0;
}
