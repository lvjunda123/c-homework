#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int sum=1;
		for(int i=2;i<=n;i++){
			int flag=1;
			for(int t=2;t<i;t++){
				if(i%t==0){
					flag=0;
				}
			}
			if(flag!=0){
				sum=sum*i;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
