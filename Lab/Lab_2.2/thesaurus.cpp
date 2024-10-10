#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void softNameOutput (string softName) {
    int widthNum = softName.size() + 7;

    cout << endl;
    cout << "\n" << setfill('*') << setw(widthNum) << "\n";
    cout << "** " + softName + " **";
    cout << "\n" << setfill('*') << setw(widthNum) << "\n";
}

void loadThesaurus (string fileName, char inputLetter) {  // 
    ifstream fileLoad; 
    string wordRead;
    string outString = "";
    int numWord = 0;

    fileName += ".txt";
    
    fileLoad.open(fileName);

    do {
        fileLoad >> wordRead;
        if (wordRead[0] == inputLetter) {
            outString += wordRead + " ";
            numWord += 1;
        }
    }
    while (!fileLoad.eof());

    if (outString == "") {
        cout << "No synonyms were found with the letter: " << inputLetter << endl;
    }
    else {
        cout << outString << endl;
        cout << "Number of words with the letter [" << inputLetter << "]:" << endl;
        cout << numWord;
    }

    fileLoad.close();
}

int main() {
    string fileName;
    char synLetter;

    softNameOutput("another program name");

    cout << "Enter the name of the file:" << endl;
    cin >> fileName;

    cout << "Enter the first letter of the synonym:" << endl;
    cin >> synLetter;

    loadThesaurus(fileName, synLetter);

   return 0;
}