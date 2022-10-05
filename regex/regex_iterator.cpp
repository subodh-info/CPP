#include <iostream>
#include <regex>

using namespace std;

int main() {
    string sentence("this subject has a submarine as a subsequence");
    string patternString = "\\b(sub)([^ ]*)";
    regex pattern(patternString);

    auto itr = regex_iterator<string::iterator>(sentence.begin(), sentence.end(), pattern);

    for(; itr != regex_iterator<string::iterator>(); ++itr) {
        cout << endl << itr->str(0);
        // cout << endl << itr->str(1);
        // cout << endl << itr->str(2);
        cout << endl << "--------------------------------";
    }
    return EXIT_SUCCESS;
}