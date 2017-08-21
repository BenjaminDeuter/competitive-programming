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
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void print_values(vector<int> ar) {
    cout << ar[0];
    for (int i = 1; i < ar.size(); i++) {
        cout << " ";
        cout << ar[i];
    }
    cout;
}

void insertionSort(vector<int> ar) {
    int tmp = ar.back();
    for (int l_i = ar.size()-1; l_i >= 1; l_i--) {
        if (ar[l_i-1] > tmp) {
            ar[l_i] = ar[l_i-1];
            print_values(ar);
            cout << "\n";
            if (l_i == 1) {
                ar[l_i-1] = tmp;
                print_values(ar);
                break;
            }
        } else {
            ar[l_i] = tmp;
            print_values(ar);
            break;
        }
    }

}

int main(void) {

    int ar_size;
    cin >> ar_size;
    vector<int> ar;
    int ar_tmp;
    for(int ar_i = 0; ar_i < ar_size; ar_i++) {
        cin >> ar_tmp;
        ar.push_back(ar_tmp);
    }
    insertionSort(ar);

    return 0;
}
