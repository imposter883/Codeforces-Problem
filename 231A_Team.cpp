#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a,b,c;
    int count =0;
    
    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        if((a==1 && b==1 && c==1) || (a==0 && b==1 && c==1) || (a==1 && b==0 & c==1) || (a==1 && b==1 && c==0)){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}