#include <iostream>
#include <string>
using namespace std;

string normalize(const string &s) {
    if (s.empty()) {
        return "";
    }

    string result = s;
    result[0] = toupper(result[0]);
    for (int i = 1; i < result.length(); i++) {
        result[i] = tolower(result[i]);
    }
    return result;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    string normalizedWord = normalize(word);
    cout << "Normalized version: " << normalizedWord << endl;

    return 0;
}