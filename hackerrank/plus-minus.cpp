#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int pos_cnt = 0;
    int neg_cnt = 0;
    int zer_cnt = 0;

    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];

       if(arr[arr_i] > 0){
           pos_cnt += 1;
       } else if(arr[arr_i] < 0){
           neg_cnt += 1;
       } else if(arr[arr_i] == 0){
           zer_cnt += 1;
       } else {
           return 1;
       }
    }

    double pos_frac = (double)(pos_cnt) / n;
    double neg_frac = (double)(neg_cnt) / n;
    double zer_frac = (double)(zer_cnt) / n;

    cout << setprecision(6) << fixed << pos_frac;
    cout << "\n";
    cout << setprecision(6) << fixed << neg_frac;
    cout << "\n";
    cout << setprecision(6) << fixed << zer_frac;
    cout << "\n";

    return 0;
}
