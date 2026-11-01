#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
	long long sum=0;
	for(int i=1;i<=n;i++){
		long long sum1=1;
		for(int t=1;t<=i;t++){
			sum1=sum1*t;
		}
		sum=sum1+sum;
	}
	cout<<sum<<endl;
}
}
