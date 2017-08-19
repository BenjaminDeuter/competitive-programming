#include <bits/stdc++.h>

using namespace std;

long long aVeryBigSum(int n, vector <long long> ar) {
    long long result = 0;

    for (auto& n : ar) {
        result += n;
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<long long> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}
