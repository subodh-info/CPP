#include <iostream>
#include <regex>

using namespace std;

int main() {
    string str = "I am looking for GeeksforGeeks article. Because, GeeksforGeeks is easy for me.";

    // matches words begin with 'Geek'
    regex pattern("Geek[a-zA-Z]+");

    // regex_replace() for replacing the match with 'Javatpoint'
    string result;
    result = regex_replace(str, pattern, "Javatpoint");
    cout << endl << result;

    string new_result;
    regex_replace(back_inserter(new_result), str.begin(), str.end(), pattern, "Programiz.pro");
    cout << endl << new_result;
    return EXIT_SUCCESS;
}