#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    queue<int> qu;
     
    // Queue - First in First out
        
   //push, emplace 
   //front -> show the top element
   //pop   -> remove the top element
   //size  -> show the size of stack
   //empty -> check it empty or not
   //swap  -> swap two stack

   qu.push(1);
   qu.push(2);
   qu.push(3);
   qu.push(4);

   qu.push(2); // duplicate values are allowed in queue
   
//   for(int val : st) {        //A queue does not provide iterators, 
//       cout << val << " ";    //so you cannot use a range-based for loop like:
//   }

    while (!qu.empty()) {
        cout << qu.front() << " "; // 1 2 3 4 
        qu.pop();
    }
    cout << endl;
    
    cout << "size of st = " << qu.size(); // 0
    return 0;
}