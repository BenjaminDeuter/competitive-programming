#include <iostream>
using namespace std;

const int LOSE  = 0;
const int WIN   = 1;

int is_win_or_lose_game(int dimensions, int tower_height) {
    if (tower_height == 1 || dimensions % 2 == 0) {
        return LOSE;
    } else {
        return WIN;
    }
}

int main() {
    int T;
    cin >> T;

    int N;
    int M;
    for (int i = 0; i < T; i++) {
        cin >> N;
        cin >> M;

        int result = is_win_or_lose_game(N, M);
        if (result == WIN) {
            cout << "1";
        } else if (result == LOSE) {
            cout << "2";
        }

        if (i != T-1) {
            cout << endl;
        }
    }

    return 0;
}
