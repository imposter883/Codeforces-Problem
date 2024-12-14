#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	vector<int>arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int count=0;

	for(int i=1; i<n;){
		if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1){
			count++;
			i+=3;
		}else{
			i++;
		}
	}

	cout<<count<<endl;

	return 0;
}
