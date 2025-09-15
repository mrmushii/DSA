#include <iostream>
#include <sstream>
#include <unordered_set>
#include <cctype>
using namespace std;

unordered_set<string> keywords = {
    "int", "float", "char", "if", "else", "for", "while", "return"
};

unordered_set<char> operators = {
    '+', '-', '*', '/', '=', '<', '>', '!'
};

unordered_set<char> separators = {
    '(', ')', '{', '}', ';', ','
};

bool isKeyword(const string& word) {
    return keywords.find(word) != keywords.end();
}

bool isNumber(const string& token) {
    for (char c : token) {
        if (!isdigit(c)) return false;
    }
    return !token.empty();
}

bool isIdentifier(const string& token) {
    if (token.empty()) return false;
    if (!isalpha(token[0]) && token[0] != '_') return false;
    for (char c : token) {
        if (!isalnum(c) && c != '_') return false;
    }
    return true;
}

int main() {
    cout << "Enter C code (multiple lines). Enter an empty line to finish:\n";

    string allCode;
    string line;
    while (true) {
        getline(cin, line);
        if (line.empty()) break;
        allCode += line + '\n';
    }

    string token = "";
    for (size_t i = 0; i < allCode.size(); ++i) {
        char ch = allCode[i];

        if (isspace(ch) || separators.count(ch) || operators.count(ch)) {
            if (!token.empty()) {
                if (isKeyword(token))
                    cout << "[Keyword] " << token << endl;
                else if (isNumber(token))
                    cout << "[Number] " << token << endl;
                else if (isIdentifier(token))
                    cout << "[Identifier] " << token << endl;
                else
                    cout << "[Unknown] " << token << endl;
                token = "";
            }

            if (separators.count(ch))
                cout << "[Separator] " << ch << endl;
            else if (operators.count(ch))
                cout << "[Operator] " << ch << endl;
        }
        else {
            token += ch;
        }
    }

    if (!token.empty()) {
        if (isKeyword(token))
            cout << "[Keyword] " << token << endl;
        else if (isNumber(token))
            cout << "[Number] " << token << endl;
        else if (isIdentifier(token))
            cout << "[Identifier] " << token << endl;
        else
            cout << "[Unknown] " << token << endl;
    }

    return 0;
}