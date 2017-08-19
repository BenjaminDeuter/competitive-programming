#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool less_than_key(string const &a, string const &b) {
    bool result = false;

    if (a.size() < b.size()) {
        result = true;
    } else if (a.size() > b.size()) {
        result = false;
    } else if (a.size() == b.size()) {
        for (int i=0; i<a.size(); i++) {
            int a_int = (int)(a.at(i) - '0');
            int b_int = (int)(b.at(i) - '0');
            if (a_int < b_int) {
                result = true;
                break;
            } else if (a_int > b_int) {
                result = false;
                break;
            }
        }
    }

    return result;
}

int main(){
    int count;
    cin >> count;

    vector<string> numbers(count);
    for (int i=0; i<count; i++) {
        cin >> numbers[i];
    }

    // Magic...
    // Stolen from here:
    // https://stackoverflow.com/questions/1380463/sorting-a-vector-of-custom-objects#answer-26295515
    sort( numbers.begin( ), numbers.end( ), [ ]( const auto& lhs, const auto& rhs )
    {
        return less_than_key(lhs, rhs);
    });

    for (auto& n : numbers) {
        cout << n << endl;
    }

    return 0;
}
