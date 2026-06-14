#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main() {
    cout << "using pair: " << endl;
    pair<string, int>p = {"yash",10};
    cout << p.first << " " << p.second << endl << endl;
    
    cout << "using pair of pairs: " << endl;
    pair<char, pair<string, int>> pp = {'M', {"yash", 100}};
    cout << pp.first << " " << pp.second.first << " " << pp.second.second << endl << endl;
    
    cout << "using vector of pairs: " << endl;
    vector<pair<string, int>> vp = {{"yash", 10}, {"john", 20}, {"doe", 30}};

    //insert a new pair into the vector of pairs
    vp.push_back({"alice", 40}); // insert 
    vp.emplace_back("bob", 50);  //in-palace object create

    for(const pair<string, int>& val : vp) {
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}