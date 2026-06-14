#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    stack<int> st;
     
    // stack - last in first out
        
   //push, emplace 
   //top   -> show the top element
   //pop   -> remove the top element
   //size  -> show the size of stack
   //empty -> check it empty or not
   //swap  -> swap two stack

   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   
//   for(int val : st) {        //A stack does not provide iterators, 
//       cout << val << " ";    //so you cannot use a range-based for loop like:
//   }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    
    cout << "size of st = " << st.size();
    return 0;
}