#include <iostream>
#include <regex>

using namespace std;

int main() {
    string s("welcome to c++ language welcome");
    regex pattern("c\\+\\+");

    smatch match;
    if(regex_search(s, match, pattern)) {
        cout << endl << "whole match : " << match.str(0);
        cout << endl << "total number of matches : " << match.size();
        cout << endl << "first matches found at position : " << match.position(1);
    }
    else {
        cout << endl << "not matched !";
    }
    return 0;
}