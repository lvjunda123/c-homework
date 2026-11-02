#include<iostream>
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
	for(int line=1;line<=m;line++){
		for(int count=1;count<=n;count++){
			cout<<"*";
		}
		cout<<endl;
	}
}
	return 0;
}
