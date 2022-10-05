#include <iostream>
#include <regex>

using namespace std;

int main() {
    string s("submarine");
    regex pattern("(sub)(.*)");

    smatch match;

    if(regex_match(s, match, pattern)) {
        cout << endl << "matched";
        cout << endl << "match size : " << match.size();
        cout << endl << "whole matched : " << match.str(0);
        cout << endl << "first group : " << match.str(1);
        cout << endl << "first group match at position : " << match.position(1);
        cout << endl << "Second group : " << match.str(2);
        cout << endl << "second group match at potision : " << match.position(2);
    }
    else {
        cout << endl << "Not matched";
    }

    return EXIT_SUCCESS;
}