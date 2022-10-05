#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void coutWords(string str){
    istringstream ss(str);
    string words;
    string list[5];
    int w = 0;
    int i = 0;
    while(ss >> words) {
        list[i] = words;
        i++;
    }

    for( auto s : list) {
        cout << endl << s;
    }
}
int main() {
    coutWords("Welcome to c++       programming       ");
    return EXIT_SUCCESS;
}