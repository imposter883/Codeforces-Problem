#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    string str;
    cin>>str;

    bool character[26]={false};
    int unique_count = 0;

    for(int i=0; i<n; i++){
        int index = str[i]-'a';
        if(!character[index]){
            character[index] = true;
            unique_count++;
        }
    }

    int ans = n-unique_count;
    int available = 26-unique_count;

    if(available<ans){
        cout<<"-1"<<endl;
    }else{
        cout<<ans<<endl;
    }

    return 0;
}
