#include <iostream>
#include <regex>

using namespace std;

int main() {
    string s("subodh");

    regex pattern("[a-z]+");

    if(regex_match(s, pattern)) {
        cout << endl << "matched";
    }
    else {
        cout << endl << "not matched";
    }

    smatch match;
    if(regex_search(s, match, pattern) == true) {
        cout << endl <<"match size : " << match.size();
        cout << endl << "whole match : " << match.str(0);
    }
    return EXIT_SUCCESS;
}

/*
[] -> indicates range
+ -> one or more times
*/