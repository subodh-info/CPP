#include <iostream>
#include <regex>

using namespace std;

int main() {
    // declare and initialize string variable for sentence
    string sentene = "welcome to c++ computer programming language. It is one of the most popular computer programming language. It is a high level language."; 
    // declare variable to store input string
    string candidateString;
    cout << "Enter any string to find in the sentence : ";
    cin >> candidateString; // store input

    // declare pattern to match with string
    string stringPattern = "\\b"+candidateString+"\\b";
    regex pattern(stringPattern);

    // declare and initialize regex iterator to iterator occurence of string
    auto itr = regex_iterator<string::iterator>(sentene.begin(), sentene.end(), pattern);
    int count = 0;
    // display total number of occurence
    while(itr != regex_iterator<string::iterator>()){
        count++;
        ++itr;
    }

    cout << endl << "total number of occurence og given word : " << count;
    return EXIT_SUCCESS;
}