#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int arr[100][100]={0};
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		arr[i][i]=1;
		arr[i][0]=1;
		for(int j=1;j<i;j++){
		    arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
		}
	}
	for(int c=0;c<=n;c++){
		for(int c2=0;c2<=c;c++){
			printf("%10d",arr[c][c2]);
		}
			cout<<endl;
	}
	return 0;
}
