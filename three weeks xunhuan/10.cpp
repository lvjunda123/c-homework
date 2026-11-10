#include<iostream>
using namespace std;
int main(){
	int m;
	while(cin>>m){
	for(int red=1;red<=m&&red<=14;red++){
		for(int white=1;white<=m-red&&white<=25;white++){
			for(int yellow=1;yellow<=m-red-white&&yellow<=17;yellow++){
				if(red+yellow+white==m){
					cout<<red<<" "<<white<<" "<<yellow<<endl;
				}
			}
		}
	}
	}
	return 0;
}
