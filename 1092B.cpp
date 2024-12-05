#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    int diff = 0;

    for(int i=1; i<n; i+=2){
        if(arr[i]>arr[i-1]){
            diff+=arr[i]-arr[i-1];
        }else if(arr[i]==arr[i-1]){
            diff+=0;
        }else{
            diff+=arr[i-1]-arr[i];
        }
    }

    cout<<diff<<endl;

    return 0;
}

