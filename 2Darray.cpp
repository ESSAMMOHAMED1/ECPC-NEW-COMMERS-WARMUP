#include <bits/stdc++.h>
using namespace std;

// Access the Elements of a 2D array
void TowDarrayAccessElement()
{
    string Names[2][4] = {
        {"essam", "mohamed", "ali", "hossam"},
        {"omnia", "ahmed", "omar", "sara"}};

    Names[0][0] = "donia";

    cout << Names[0][0];
}




/// Loop Through a 2D array

void TowDarrayLoopIn()
{
    int players[20][20];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> players[i][j];
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << players[i][j] << "\n";
            }
        }
    }
}






//===============================================================================






void problem(){
    int Grid[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
};
}