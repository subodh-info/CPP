#include <iostream>
#include <regex>

using namespace std;

int main() {
    string a = "GeeksforGeeks"; 
    regex pattern("(Geek)(.*)"); // here pattern is the object of regular expression

    // regex_match function to match string with regular expression
    if(regex_match(a, pattern)) {
        cout << endl << "String 'a' matches with regular expression 'pattern'\n";
    }

    // regex_match function for matching a range in string
    if(regex_match(a.begin(), a.end(), pattern)) {
        cout << endl << "string 'a' matches with regular expression 'pattern' in the range from 0 to end \n";
    }
    
    return EXIT_SUCCESS;
}