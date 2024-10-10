#include "Team.h"

Team::Team() {
    wins = 0;
    losses = 0;
    name = "default";
}

Team::Team(string name, int wins, int losses) {
   
    this->name = name;
    this->wins = wins;
    this->losses = losses;
}

double Team::GetWinPercentage() {
    return (wins/static_cast<double>(wins+losses));
}

void Team::PrintStanding() {
    if (Team::GetWinPercentage() >= 0.5) {
        cout << "Win percentage: " << fixed << setprecision(2) << Team::GetWinPercentage() << endl;

        cout << "Congratulations, Team " << name;
        cout << " has a winning average!" << endl;
    }
    else {
        cout << "Win percentage: " << fixed << setprecision(2) << Team::GetWinPercentage() << endl;

        cout << "Team " << name;
        cout << " has a losing average.";
    }
}