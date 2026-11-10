#include<iostream>
using namespace std;
int main(){
	int m;
	while(cin >> m){    
		for(int line = 1; line <= m; line++){
			for(int count = 1; count <= line; count++){
				cout<<"*";
			}
		    cout<<endl;
		}
	}
	return 0;
}
