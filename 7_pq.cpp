#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    priority_queue<int> pq;    // priority_queue - by default largest number on top

    priority_queue<int, vector<int>, greater<int>> q; // if we want smaller element come on top

   //push, emplace 
   //top   -> show the top element
   //pop   -> remove the top element
   //size  -> show the size of stack
   //empty -> check it empty or not

   pq.push(3);
   pq.push(7);
   pq.push(4);
   pq.push(1);
   pq.push(7); // duplicate values are allowed in priority_queue

//   for(int val : st) {        //A priority_queue does not provide iterators, 
//       cout << val << " ";    //so you cannot use a range-based for loop like:
//   }

    while (!pq.empty()) {
        cout << pq.top() << " "; // 7 7 4 3 1
        pq.pop();
    }
    cout << endl;
    
    cout << "size of st = " << pq.size(); // 0

    // pq.pop(); // it will be crash the code 
    // if you pop an element from an empty priority_queue, it will result in undefined behavior.
    return 0;
}