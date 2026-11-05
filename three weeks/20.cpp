#include<iostream>
using namespace std;
int main(){
	int m;
	while(cin >> m){    
	for(int line=1;line<=m;line++){
		for(int space=1;space<=m-line;space++){
			cout<<" ";
		}
		for(int x=1;x<=2*line-1;x++){
			
			cout<<"*";
		}
		cout<<endl;
	}
	}
	return 0;
}

