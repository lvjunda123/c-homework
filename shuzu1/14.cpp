#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int arr[10]={};
	for(int a=0;a<10;a++){
		cin>>arr[a];
	}
	int sum=0;
	int sum1=0;
	for(int j=0;j<10;j++){
		if(arr[j]%2!=0){
			sum=sum+arr[j];
			sum1=sum1+1;
		}
	}
	double pj=1.0*sum/sum1;
	printf("%.6f",pj);
	return 0;
}
