#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    int prim_diag = 0;
    int scnd_diag = 0;
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];

          // Primary Diagonal
          if(a_i == a_j){
              prim_diag += a[a_i][a_j];
          }
          // Secondary Diagonal
          if(a_i == (n-1) - a_j){
              scnd_diag += a[a_i][a_j];
          }
       }
    }

    int result = abs(prim_diag - scnd_diag);
    printf("%d", result);

    return 0;
}
