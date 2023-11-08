#include <bits/stdc++.h>
using namespace std;
// Access the Elements of a 2D array



///Loop Through a 2D array



void TowDarray(){
int players[20][20];
for(int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) {
    cin>>players[i][j];
}

for(int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) {
    cout << players[i][j] << "\n";
  }
}
}