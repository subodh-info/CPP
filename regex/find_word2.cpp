#include <iostream>
#include <regex>

using namespace std;

int main() {
    string s("this subject has a submarine as a subsequence");
    string input;
    cout << endl << "Enter any string => " ;
    cin >> input;

    string stringPattern = "\\b"+input+"\\b";
    regex pattern(stringPattern);

    smatch match;
    if(regex_search(s, match, pattern)) {
        cout << endl << "matched " ;
        cout << endl << "at position : " << match.position(0);
    }
    else {
        cout << endl << "not smatched";
    }
    
    return EXIT_SUCCESS;
}