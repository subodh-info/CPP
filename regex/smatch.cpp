#include <iostream>
#include <regex>

using namespace std;

int main() {
    string str = "GeeksforGeeks";
    regex pattern("(Geek)(.*)");
    smatch match;

    if(regex_search(str, match, pattern) == true) {
        cout << "Match size : " << match.size() << endl;
        cout << "while match : " << match.str(0) << endl;
        cout << "first capturing group is : " << match.str(1) << " which is capture at index " << match.position(1) << endl;
        cout << "second captureing group is : " << match.str(2) << " which is capture at index " << match.position(2) << endl;
    }
    else {
        cout << "no result found" << endl;
    }
    return EXIT_SUCCESS;
}