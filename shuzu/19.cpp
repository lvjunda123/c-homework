#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
    	int arr[100]={};
        arr[0]=1,arr[1]=1;
    	for(int a=2;a<n;a++){
	    	arr[a]=arr[a-1]+arr[a-2];
	    }
	    for(int c=0;c<n;c++){
		    cout<<arr[c]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
