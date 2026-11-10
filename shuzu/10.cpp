#include<iostream>
using namespace std;
int main(){
	int arr[10]={};
	for(int a=0;a<10;a++){
		cin>>arr[a];
	}
	int maxx=0;
	int minx=0;
	int max=arr[0];
	int min=arr[0];
	for(int b=0;b<10;b++){
		if(arr[b]>max){
			max=arr[b];
			maxx=b;
		}
		if(arr[b]<min){
			min=arr[b];
			minx=b;
		}
	}
	int t=0;
	t=arr[maxx];
	arr[maxx]=arr[minx];
	arr[minx]=t;
	for(int c=0;c<10;c++){
		cout<<arr[c]<<" ";
	}
	
	return 0;
}
