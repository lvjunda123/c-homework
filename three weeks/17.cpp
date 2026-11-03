#include<iostream>
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
	int sumc=0;
	int sum=0;
	for(int i=m;i<=n;i++){
		int sums7=0;
		for(int t=i;t>0;t=t/10){
			int s=0;
			s=t%10;
			sums7=s+sums7;
		}
		if(sums7==7){
			sumc=sumc+1;
			sum=sum+i;
		}
	}
	cout<<sumc<<" "<<sum<<endl;
}
	return 0;
}

