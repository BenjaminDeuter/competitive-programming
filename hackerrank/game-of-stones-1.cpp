#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_T = 100;
const int UNDEF = -1;
const int LOSE  = 0;
const int WIN   = 1;

int invert(int other_player) {
    return 1 - other_player;
}

int play_game(vector<int> &lut, int stones) {
    int result = LOSE;

    if (lut[stones] == LOSE || lut[stones] == WIN) {
        result = lut[stones];
    } else if (lut[stones] == UNDEF) {
        if (stones >= 2) {
            result |= invert(play_game(lut, stones - 2));
        }
        if (stones >= 3) {
            result |= invert(play_game(lut, stones - 3));
        }
        if (stones >= 5) {
            result |= invert(play_game(lut, stones - 5));
        }

        // Cache this value for speedup
        lut[stones] = result;
    }

    return result;
}

int main() {
    // Explanation: If you play a game of n stones and you begin, will you win or lose?
    // "You lose" is equivalent to lut[n] == LOSE
    // "You win"  is equivalent to lut[n] == WIN
    vector<int> lut(MAX_T+1);

    for (int i = 0; i < MAX_T+1; i++) {
        lut[i] = UNDEF;
    }

    // The values we already know
    lut[ 1] = LOSE;
    lut[ 2] = WIN;
    lut[ 3] = WIN;
    lut[ 4] = WIN;
    lut[ 5] = WIN;
    lut[ 6] = WIN;
    lut[ 7] = LOSE;
    lut[10] = WIN;

    int count;
    cin >> count;

    vector<int> games(count);
    int result;
    for (int i = 0; i < count; i++) {
        cin >> games[i];
        result = play_game(lut, games[i]);
        if (result == WIN) {
            cout << "First";
        } else if (result == LOSE) {
            cout << "Second";
        }
        if (i != count-1) {
            cout << "\n";
        }
    }

    return 0;
}
