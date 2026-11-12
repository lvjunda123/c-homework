#include<iostream>
using namespace std;
int main(){
	int arr[10]={};
	for(int a=0;a<10;a++){
		cin>>arr[a];
	}
	int sum=0;
	for(int t=0;t<10;t++){
		if(arr[t]%2!=0){
			sum=sum+1;
		}
	}
	int arr2[10]={};
	int d=0;
	for(int t2=0;t2<10;t2++){
		if(arr[t2]%2!=0){
			arr2[d]=arr[t2];
			d++;
		}
	}
	for(int c=0;c<sum;c++){
		cout<<arr2[c]<<" ";
	}
	cout<<endl;
	cout<<sum<<endl;
	return 0;
}
