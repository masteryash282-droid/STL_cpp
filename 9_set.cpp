#include <iostream>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    set<int> st;
    // Set - unique elements in sorted order

   //insert, emplace        
   //count -> check if a key exists in the set
   //erase -> remove an element with a specific key
    //find  -> find an element with a specific key
   //empty -> check it empty or not

   st.insert(1);
   st.insert(2);
   st.insert(3);
   st.insert(4);

   st.insert(4); // duplicate element will not be inserted in the set
   st.insert(3); // duplicate element will not be inserted in the set

   cout << "size of st = " << st.size() << endl; // 4

   cout << "lower bound of 3 = " << *st.lower_bound(3) << endl; // 3
   cout << "upper bound of 3 = " << *st.upper_bound(3) << endl; // 4

   for(int val : st) {        // A set provides iterators
       cout << val << " ";    // so you can use a range-based for loop
   }
   cout << endl;

    while (!st.empty()) {
        cout << st.begin() << " "; // 1 2 3 4 
        st.erase(st.begin());
    }
    cout << endl;
    
    cout << "size of st = " << st.size(); // 0

    /* multiset */

    multiset<int> ms;
    ms.insert(1);       
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);

    ms.insert(4); // duplicate element will be inserted in the multiset
    ms.insert(3); // duplicate element will be inserted in the multiset

    cout << "size of ms = " << ms.size() << endl; // 6

    for(int val : ms) {        // A multiset provides iterators
       cout << val << " ";    // so you can use a range-based for loop
    }
    cout << endl;

    /* unordered_set */

    unordered_set<int> us;
    us.insert(1);
    us.insert(2);

    // it print in random order
    //which means lower_bound and upper_bound function is not exist for it
    return 0;
}