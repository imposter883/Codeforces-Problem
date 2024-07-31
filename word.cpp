#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int lowercaseCount = 0, uppercaseCount = 0;

    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            lowercaseCount++;
        } else if (isupper(s[i])) {
            uppercaseCount++;
        }
    }

    if (lowercaseCount >= uppercaseCount) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    }

    cout << s;

    return 0;
}
