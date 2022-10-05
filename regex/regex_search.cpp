#include <iostream>
#include <regex>

using namespace std;

int main() {
    string str = "I am looking for GeeksforGeeks articles. Because, I want to learn from GeeksforGeeks"; // string to search by regular expression
    regex b("l[a-zA-Z]+"); // regular expression for searching

    // flag type for determining the matching behaviour
    smatch m;

    // regex_search() for searching the regex pattern 'b' in the string 'str'
    // 'm' is floag type for determining the matching behaviour
    regex_search(str, m, b);

    // for each loop
    for(auto x : m) {
        cout << x; 
    }

    return EXIT_SUCCESS;
}