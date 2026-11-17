#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
	int arr[100][100];
    int arr2[100][100];
	for(int a=0;a<n;a++){
		for(int a2=0;a2<n;a2++){
			cin>>arr[a][a2];
		}
	}
	int h=0;
	int l=n-1;
	for(;h<n;h++){
		for(int l=n-1;l>=0;l--){    
			arr2[h][l]=arr[n-1-l][h]; //从l=0 1 2----> 到l2（n-1-l）=2 1 0   2=n-0-1  1=n-1-1....
		}
	}
	for(int a=0;a<n;a++){
		for(int a2=0;a2<n;a2++){
			cout<<arr2[a][a2]<<" ";
		}
		cout<<endl;
	}
}
	return 0;
}
