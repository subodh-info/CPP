#include <iostream>
#include <regex>

using namespace std;

int main() {
    string str("test1");
    regex pattern(".+\\d");

    if(regex_match(str, pattern)){
        cout << endl << "Matched";
    }
    else {
        cout << endl << "not matched !";
    }
    return EXIT_SUCCESS;
}