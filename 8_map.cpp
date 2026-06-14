#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    map<string, int> mp;
    mp["TV"] = 25;
    mp["Laptop"] = 30;
    mp["Headphones"] = 35;
    mp["Laptop"] = 40; // update the value of key "Laptop" to 50

    // Map - Key-Value pairs
        
   //insert, emplace 
   //count -> check if a key exists in the map
   //at   -> access or insert an element with a specific key
   //erase -> remove an element with a specific key
   //find  -> find an element with a specific key 
   //size  -> show the size of map
   //empty -> check it empty or not
   //swap  -> swap two maps

   mp.insert({"Zlice", 250});
   mp.insert({"Bob", 300});
   mp.insert({"Charlie", 350});

   //sort by key in ascending order by default
  for(const auto& pair : mp) {        
      cout << pair.first << ": " << pair.second << " " << endl;    
  } 
  cout << endl;
    
  cout << "count of TV = " << mp.count("TV") << endl; // 1 that count the number of key "TV"
  cout << "value of TV = " << mp["TV"] << endl; // 25 that return the value of key("TV")

  mp.erase("Laptop"); // remove the key "Laptop" and its associated value from the map

    cout << "size of st = " << mp.size() << endl << endl;  // 2

    if(mp.find("camera") != mp.end()) { // check if the key "camera" exists in the map
        cout << "camera found in the map" << endl;
    } else {
        cout << "camera not found in the map" << endl;
    }


    /* multimap*/
    cout << endl << "Multimap: " << endl;

    multimap<string, int> ml;
    ml.insert({"TV", 25});
    ml.insert({"TV", 25});  // multimap allows duplicate keys   
    ml.insert({"TV", 50});

    //if you print that then it print 3 times because multimap allows duplicate keys
    for(const auto& pair : ml) {        
      cout << pair.first << ": " << pair.second << " " << endl;
    }
    
    //if you want to remove only one key
    auto it = ml.find("TV"); // find the first occurrence of the key "TV"
    cout << "first occurrence of TV: " << it->first << ": " << it->second << endl; // TV: 25

    ml.erase(it); // remove the first occurrence of the key "TV" and its associated value from the multimap
    ml.erase("TV"); // remove all the key "TV" and its associated value from the multimap
    
    /* Unordered Map */
    cout << endl << "Unordered Map: " << endl;
    unordered_map<string, int> um;
    um["TV"] = 25;
    um["Laptop"] = 30;
    um["Headphones"] = 35;

    // it print in random order 
    for(const auto& pair : um) {        
      cout << pair.first << ": " << pair.second << " " << endl;
    }

    return 0;
}