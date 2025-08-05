#include <iostream>
#include <string>

using namespace std;

// Function to replace all occurrences of a word in a phrase with a replacement word
string replace_word(string phrase, string word, string replacement) {
    string result; 
    size_t position = 0; 
    while ((position = phrase.find(word, position)) != string::npos) { 
        result += phrase.substr(0, position); 
        result += replacement; 
        phrase.erase(0, position + word.size()); 
        position = 0; 
    }
    result += phrase; 
    return result; 
}

int main() {
    string phrase, word, replacement;
    cout << "Enter phrase: ";
    getline(cin, phrase); // Input the phrase
    cout << "Word to replace: ";
    cin >> word; // Input the word to replace
    cout << "New word: ";
    cin >> replacement; // Input the replacement word
    cout << "Result: " << replace_word(phrase, word, replacement) << endl; // Output the modified phrase
    return 0;
}