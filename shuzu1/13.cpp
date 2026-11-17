#include<iostream>
using namespace std;
int main(){
	int arr[10]={};
	for(int a=0;a<10;a++){
		cin>>arr[a];
	}
	int sum=0;
	for(int j=0;j<10;j++){
		if(arr[j]%2!=0){
			sum=sum+1;
		}
	}
	cout<<sum<<endl;
	return 0;
}
