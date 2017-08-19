#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s) {
    bool cont = true;
    while (cont) {
        cont = false;
        if (s.size() >= 2) {
            for (int i=0; i<s.size()-1; i++) {
                if (s.at(i) == s.at(i+1)) {
                    s = s.substr(0, i) + s.substr(i+2, s.size());
                    cont = true;
                    break;
                }
            }
        } else {
            break;
        }
    }

    if (s == "") {
        s = "Empty String";
    }

    return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
