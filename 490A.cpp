#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> p, m, pe;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            p.push_back(i);
        } else if (arr[i] == 2) {
            m.push_back(i);
        } else if (arr[i] == 3) {
            pe.push_back(i);
        }
    }

    int team = min({p.size(), m.size(), pe.size()});

    if (team > 0) {
        cout << team << endl;
        for (int i = 0; i < team; i++) {
            cout << p[i] + 1 << " " << m[i] + 1 << " " << pe[i] + 1 << endl;
        }
    } else {
        cout << "0" << endl;
    }

    return 0;
}
