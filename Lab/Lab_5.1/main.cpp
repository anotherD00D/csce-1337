#include "Team.h"
#include "Team.cpp"

int main() {
    string InputName;
    int InputWins;
    int InputLosses;

    cin >> InputName;
    cin >> InputWins;
    cin >> InputLosses;

    Team team1(InputName, InputWins, InputLosses);

    team1.PrintStanding();

    return 0;
}