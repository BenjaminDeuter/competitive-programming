#include <bits/stdc++.h>

using namespace std;

int main() {
    int SIZE = 5;
    vector<long long> arr(SIZE);
    for(int arr_i = 0; arr_i < SIZE; arr_i++){
        cin >> arr[arr_i];
    }

    vector<long long> all_adds_and_subs;
    long long tmp_sum;
    for(int i = 0; i < SIZE; i++){
        vector<long long> tmp_vec(SIZE);
        tmp_vec = arr;
        tmp_vec.erase(next(begin(tmp_vec), i));

        tmp_sum = 0;
        for (auto& n : tmp_vec) {
            tmp_sum += n;
        }
        all_adds_and_subs.push_back(tmp_sum);
    }

    long long min_sum = *min_element( begin(all_adds_and_subs), end(all_adds_and_subs) );
    long long max_sum = *max_element( begin(all_adds_and_subs), end(all_adds_and_subs) );

    printf("%lld %lld\n", min_sum, max_sum);

    return 0;
}
