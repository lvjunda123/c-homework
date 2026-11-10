#include<iostream>
using namespace std;
int main(){
    long long n=0;
	while(cin>>n){
	int arr[20]={};
	int c=0;
	for(;n>0;n=n/10){
		int i=0;
		i=n%10;
		arr[c]=i;
		c++;
	}
	for(int g=0;g<=c-2;g++){
		for(int j=0;j<=c-2;j++){
		    int t=0;
		    if(arr[j+1]>arr[j]){
		        t=arr[j];
			    arr[j]=arr[j+1];
			    arr[j+1]=t;
		    }
		}
	}
	for(int s=0;s<=c-1;s++){
		cout<<arr[s];
	}
		cout<<endl;
	}
	return 0;
}
