#include "Distance.h"

void drive(Distance& distance) {
    double kilo;
    char choice = 0;

    while ((toupper(choice)) != 'R') {
        cout << "a - Add distance" << endl;
        cout << "r - Arrived Home" << endl;
        cin >> choice;
        switch (toupper(choice)) {
            case 'A':
                cout << "Enter kilometers driven: " << endl;
                cin >> kilo;
                distance.kilometer += kilo;
                cout << "Total miles driven: ";
                cout << distance.kilometer << endl << endl;
            case 'R':
                cout << "You have driven " << distance.kilometer << " kilometers" << endl;
                break;
            default:
                cout << "Selected letter choice is not applicable, please try again..." << endl;
                break;
        }
    }  

}

int main() {

    Distance dst1;

    drive(dst1);

    return 0;
}