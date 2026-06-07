#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    set<char> st;
    for (char c : s) {
        if (c >= 'a' && c <= 'z')
            st.insert(c);
    }

    cout << (st.size() == 26 ? "Pangram" : "Not Pangram");
}
