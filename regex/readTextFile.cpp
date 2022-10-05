#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream fin;
    fin.open("test.txt");
    string words;
    vector<string> list_of_words;
    if(fin.is_open()) {
        while(!fin.eof()) {
            fin >> words;
            list_of_words.push_back(words);
        }
        cout << " total number of words : " << list_of_words.size();
        // display list of words
        int i = 1;
        for (auto temp : list_of_words) {
            cout << endl << i << " => " <<temp;
            ++i;
        }
    }
    else {
        cout << endl << "found not found";
    }

    return EXIT_SUCCESS;
}
