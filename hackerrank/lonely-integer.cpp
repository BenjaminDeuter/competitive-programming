#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> a_set;
    int tmp;
    for(int i = 0; i < n; i++) {
       cin >> tmp;

       if (a_set.count(tmp)) {
           a_set.erase(tmp);
       } else {
           a_set.insert(tmp);
       }

    }
    int result = *a_set.begin();
    printf("%d", result);

    return 0;
}
