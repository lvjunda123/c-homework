#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int x=2;x<=n;x++){
		int sum=0;
		for(int d=1;d<=x/2;d++){
			if(x%d==0){
				sum+=d;
			}
		}
		if(sum==x){
			cout<<x<<"=1";
			for(int d=2;d<=x/2;d++){
				if(x%d==0){
					cout<<"+"<<d;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
