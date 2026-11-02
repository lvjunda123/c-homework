#include<iostream>
using namespace std;
int main(){
	int m;
	while(cin >> m){    
	for(int line=1;line<=m;line++){
		for(int space=m-1;space>0;space--){
			cout<<" ";
		}
		for(int x=1;x<m;x+=2){
			cout<<"*";
		}
		cout<<endl;
	}
	}
	return 0;
}
