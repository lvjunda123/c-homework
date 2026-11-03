#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
	for(int t=2;t<=n;t++){
		int flag=1;
		for(int j=2;j<t;j++){
			if(t%j==0){
				flag=0;
				break;
			}
		}
	if(flag==1){
	cout<<" "<<t;
		}
	}
		cout<<endl;
	}
	return 0;
}
