#include<iostream>
using namespace std;
int main(){
    double n,sum=0,temp;
	cin>>n;
	int count=0;
	for(;count<n;count++){
		temp=1.0/(1.0+3.0*count);
		if(count%2==1){
			temp=-temp;
		}
		sum=sum+temp;
	}
	printf("%.10f\n",sum);
	return 0;
}
