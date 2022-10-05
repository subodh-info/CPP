#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<char, vector<char>> graph;

void addEdges(char u, char v) {
    vector<char> temp;
    if(graph.find(u) == graph.end()) {
        temp.clear();
        temp.push_back(v);
        graph.insert(make_pair(u, temp));
    }
    else{
        temp = graph[u];
        temp.push_back(v);
        graph.insert(make_pair(u, temp));
    }

    if(graph.find(v) == graph.end()) {
        temp.clear();
        temp.push_back(u);
        graph.insert(make_pair(v, temp));
    }
    else {
        temp = graph[v];
        temp.push_back(u);
        graph.insert(make_pair(v, temp));
    }
}

void printGraphs() {
    for(auto &it : graph) {
        cout << endl;
        cout << it.first;
        vector<char> temp = graph[it.first];
        for(int i=0; i < temp.size(); ++i) {
            cout << " --> " << temp[i];
        }

    }
}

int main() {
    addEdges('a', 'b');
    addEdges('a', 'd');
    addEdges('b', 'c');
    addEdges('b', 'd');
    addEdges('b', 'c');
    addEdges('c', 'e');
    addEdges('d', 'e');

    printGraphs(); 

    return EXIT_SUCCESS;
}