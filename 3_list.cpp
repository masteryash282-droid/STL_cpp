#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<int> ls;
    
    // list - doubly like list --> That means:
    // 1.each node points to the next node
    // 2.each node also points to the previous node
    
    //random access is not possible in list because of its internal implementation is like doubly linked list

   //push_back(emplace_back) & push_front(emplace_front)
   //emplace_back & emplace_front
   //pop_back & pop_front
   
   //size, erase, clear, begin, end, rbegin, rend, insert, front, pop_back
   
   ls.push_back(1);
   ls.push_back(2);
   ls.push_front(6);
   ls.push_front(5);  
   
   for(auto val : ls) {
       cout << val << " ";  // 5 6 1 2
   }

   // cout << ls[0]; error: random access is not possible in list
    return 0;
}