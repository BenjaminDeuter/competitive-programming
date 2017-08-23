#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int maxXor(int l, int r) {
    int l_copy = l;
    int l_bits = 1;
    while (l_copy >>= 1) {
        l_bits++;
    }

    int r_copy = r;
    int r_bits = 1;
    while (r_copy >>= 1) {
        r_bits++;
    }

    int max_bits = max(l_bits, r_bits);
    int max_value = pow(2, max_bits) - 1;

    int tmp = 0;
    for (int k = max_value; k >= 0; k--) {
        for (int i = l; i <= r; i++) {
            tmp = k ^ i;
            if (l <= tmp && tmp <= r) {
                return k;
            }
        }
    }

    return 0;
}

int main() {
    int res;
    int l;
    cin >> l;

    int r;
    cin >> r;

    res = maxXor(l, r);
    cout << res;

    return 0;
}
