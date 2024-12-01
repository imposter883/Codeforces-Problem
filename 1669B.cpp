#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n+1,0);
        int result = -1;

        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;

            arr[x]++;

            if(arr[x]==3){
                result=x;
            }
        }

        cout << result << endl;
    }

    return 0;
}

