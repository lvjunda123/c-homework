#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int count=sizeof(arr)/sizeof(arr[0]);
	int a=0,z=count-1;
	int t;
	for(;a<z;a++,z--){
		t=arr[a];
		arr[a]=arr[z];
		arr[z]=t;
	}
	int i=0;
	
	while(i<count){
		cout<<arr[i]<<endl;
		i++;
	}
		return 0;
}


