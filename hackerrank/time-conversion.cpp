#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string result = "";

    if(s.size() != 10) {
        printf("ERROR2");
        exit(1);
    }

    string hours  = s.substr(0, 2);
    string minsec = s.substr(2, 6);
    string ampm   = s.substr(8, 2);

    int hours_int = stoi(hours);

    if(ampm == "AM") {
        if (hours_int == 12) {
            hours_int = 0;
        }
    } else if(ampm == "PM") {
        if (hours_int != 12) {
            hours_int += 12;
        }
    } else {
        printf("ERROR1");
        exit(1);
    }

    stringstream ss;
    ss << setw(2) << setfill('0') << hours_int;
    hours = ss.str();
    result = hours + minsec;

    return result;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
