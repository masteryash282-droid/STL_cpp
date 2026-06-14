#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    //vector - use as dynamic array
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    v.emplace_back(4);

    cout << "Elements of the vector: ";
    for(auto val : v) {
        cout << val << " ";  // 10 20 30 1 2 3 4
    } cout << endl << endl;

    cout << "size = " << v.size() << endl;
    cout << "capacity = " << v.capacity() << endl << endl;
    
    // Check if the vector is empty
    if(v.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }

    v.clear(); // Clear the vector

    cout << "after clear: ";
     // Check if the vector is empty after clearing
    if(v.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl << endl;
    }

    vector<int> v2(5, 100); // Create a vector of size 5 with all elements initialized to 100
    // use of iterators
    vector<int>::iterator it = v2.begin();

    cout << "Elements of v2 using iterators: ";
    for(; it != v2.end(); it++) {
        cout << *it << " ";
    } 
    cout << endl << endl;

    v2.erase(v2.begin()); // Erase the first element of the vector

    cout << "Elements of v2 after erasing the first element: " << endl; 

    for(auto val : v2) {
        cout << val << " ";
    } 
    cout << endl << endl;
    
    // Erase a range of elements from the vector
    v2.erase(v2.begin(), v2.begin() + 2); // Erase the first two elements of the vector

    cout << "Elements of v2 after erasing the first two elements: " << endl;

    for(auto val : v2) {
        cout << val << " ";
    } 
    cout << endl << endl;
    return 0;
}