#include <iostream>
#include <regex>

using namespace std;

int main() {
    string s("geeksforgeeks is one of the most popular website. I like geeksforgeeks for study computer language. geeksforgeeks is the best platform to learn any computer science subject");
    string input;
    cout << endl << "Enter any string : ";
    getline(cin, input);

    string stringPattern = "\\b("+input+")\\b";
    regex pattern(stringPattern);

    int occurence = 0;
    smatch match;
    regex_search(s, match, pattern);
    auto it = regex_iterator<string::iterator>(s.begin(), s.end(), pattern);
    auto end = regex_iterator<string::iterator>();

    cout << endl << "total number of words : " << distance(it, end);
    while (it != end) {
        cout << endl << "Position : " << it->position();
        ++it;
    }
    
    return 0;
}