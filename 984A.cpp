#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<long long>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    int mid = 0;

    if(n%2==0){
        mid = n/2-1;
        cout<<arr[mid]<<endl;
    }else{
        mid = n/2;
        cout<<arr[mid]<<endl;
    }
    return 0;
}
