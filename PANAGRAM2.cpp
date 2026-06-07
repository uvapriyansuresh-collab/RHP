#include <iostream>
#include <vector>
using namespace std;

bool isPangram(string s) {
    vector<bool> seen(26, false);

    for (char ch : s) {
        if (ch >= 'A' && ch <= 'Z') {
            seen[ch - 'A'] = true;
        }
    }

    for (bool x : seen) {
        if (!x) return false;
    }

    return true;
}

int main() {
    string s;
    getline(cin, s);

    cout << (isPangram(s) ? "Pangram" : "Not Pangram");
    return 0;
}
