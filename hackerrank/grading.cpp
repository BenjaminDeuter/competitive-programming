#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    vector < int > result;

    for (auto& g : grades) {
        int multiple_diff = 5 - (g % 5);
        if ( multiple_diff >= 3) {
            multiple_diff = 0;
        }
        int new_grade = g + multiple_diff;

        if (new_grade >= 40) {
            result.push_back(new_grade);
        } else {
            result.push_back(g);
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
