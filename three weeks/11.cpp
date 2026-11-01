#include<iostream>
using namespace std;
int main(){
	int h,l;
	cin>>h>>l;
	int flag=0;
	for(int c=0;2*c<=l;c++){
		for(int r=0;4*r<=l-2*c;r++){
			if(r+c==h&&4*r+2*c==l){
				cout<<c<<" "<<r<<endl;
				flag=1;
			}
		}
	}
	if(flag==0){
		cout<<"no"<<endl;}
}



