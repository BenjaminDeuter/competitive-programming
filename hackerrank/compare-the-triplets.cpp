#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {

    // Get Alice's values
    string alice_str;
    getline(cin, alice_str);
    istringstream alice_iss(alice_str);
    string bob_str;
    getline(cin, bob_str);
    istringstream bob_iss(bob_str);

    vector<int> alice_vec;
    vector<int> bob_vec;
    int n;
    while (alice_iss >> n) {
        alice_vec.push_back(n);
    }
    while (bob_iss >> n) {
        bob_vec.push_back(n);
    }

    if (alice_vec.size() != bob_vec.size()) {
        return 1;
    }

    int alice_score = 0;
    int bob_score   = 0;
    for (int i = 0; i < alice_vec.size(); i++) {

        // Actual logic
        if (alice_vec[i] > bob_vec[i]) {
            ++alice_score;
        } else if (alice_vec[i] < bob_vec[i]) {
            ++bob_score;
        }
    }

    printf("%d %d", alice_score, bob_score);

    return 0;
}
