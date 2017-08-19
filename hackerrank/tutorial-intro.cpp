#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int V;
    cin >> V;

    int n;
    cin >> n;

    vector<int> ar(n);
    for(int i = 0; i < n; i++) {
       cin >> ar[i];
    }

    auto it = find(ar.begin(), ar.end(), V);
    int index = distance(ar.begin(), it);

    printf("%d", index);

    return 0;
}
