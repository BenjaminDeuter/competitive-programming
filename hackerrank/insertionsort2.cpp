#include <iostream>
#include <vector>
using namespace std;

void print_values(vector<int> ar) {
    cout << ar[0];
    for (int i = 1; i < ar.size(); i++) {
        cout << " ";
        cout << ar[i];
    }
    cout;
}

void insertionSort(int ar_size, vector<int> ar) {
    for (int last = 1; last < ar_size; last++) {
        int tmp = ar[last];
        for (int l_i = last; l_i >= 1; l_i--) {
            if (ar[l_i-1] > tmp) {
                ar[l_i] = ar[l_i-1];
                if (l_i == 1) {
                    ar[l_i-1] = tmp;
                    break;
                }
            } else {
                ar[l_i] = tmp;
                break;
            }
        }
        print_values(ar);
        if (last != ar_size-1) {
            cout << endl;
        }
    }
}

int main(void) {
    int ar_size;
    cin >> ar_size;

    vector<int> ar(ar_size);
    for(int i = 0; i < ar_size; i++) {
        cin >> ar[i];
    }

    insertionSort(ar_size, ar);
    return 0;
}
