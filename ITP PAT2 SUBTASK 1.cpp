   #include <iostream>
#include <string>
#include <map>

using namespace std;

// Morse code representation for A-Z
map<char, string> morseCode = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."},
    {'D', "-.."}, {'E', "."}, {'F', "..-."},
    {'G', "--."}, {'H', "...."}, {'I', ".."},
    {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
    {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
    {'S', "..."}, {'T', "-"}, {'U', "..-"},
    {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
    {'Y', "-.--"}, {'Z', "--.."}
};

int main() {
    string input;
    cout << "Enter a message in English (A-Z characters only): ";
    getline(cin, input);

    string fullMorse = "";

    for (char c : input) {
        if (c == ' ') {
            continue; // Skip spaces for individual outputs
        }
        c = toupper(c);
        if (morseCode.find(c) != morseCode.end()) {
            cout << c << ": " << morseCode[c] << endl;
            fullMorse += morseCode[c] + " "; // Three spaces between letters
        }
    }

    cout << "Full Morse Code Message: " << endl;
    cout << fullMorse << endl;

    return 0;
}