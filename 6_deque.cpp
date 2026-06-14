#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    deque<int> dq;
    
    // deque - double-ended queue --> That means:
    // 1. we can insert and delete element from both end
    // 2. you can insert/remove at the back
    //internal implementation is like dynamic array therefor we can random access is possible

   //push_back(emplace_back) & push_front(emplace_front)
   //emplace_back & emplace_front
   //pop_back & pop_front
   
   //size, erase, clear, begin, end, rbegin, rend, insert, front, pop_back
   
   dq.push_back(1);
   dq.push_back(2);
   dq.push_front(6);
   dq.push_front(5);
   
   for(auto val : dq) {  
       cout << val << " ";  // 5 6 1 2
   }
   cout << dq[0]; // random access is possible in deque

   pop_front(dq); // remove the first element of the deque
   pop_back(dq); // remove the last element of the deque

    cout << "after pop_front and pop_back: " << endl;
    for(auto val : dq) {  
         cout << val << " ";  // 6 1    
    }
    return 0;
}