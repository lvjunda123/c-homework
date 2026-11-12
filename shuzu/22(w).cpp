#include<iostream>
using namespace std;
int main(){
	int arr[10]={};
	while(cin>>arr[0]){
	for(int a=1;a<10;a++){
		cin>>arr[a];
	}
	int n;
	cin>>n;
	int sum=0;
	for(int x=0;x<10;x++){
		if(n==arr[x]){
			cout<<x<<endl;break;
		}
		if(n!=arr[x]){
			sum++;
		}
	}
	if(sum==10){
		cout<<"no this number."<<endl;
	}
}
	return 0;
}
