#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cin >> n;
    
    // Check if n is valid
    if (n <= 0) {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

    // Input elements
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    /*In order to insert elements in vector v
        we have to use -
        v.push_back(12);
        v.emplace_back(12);    --faster than push_back();
    
    Creating vector with n instances of 100.
    vector<int>v1(5,100);
    // Even after this line if we try -
        v.push_back(10);
    It will increase the size of v1 from 5 to 6 and its last element is going to be 10.
    since,it is dynamic in nature.    

    vector<int>v2(v1);          ---- copying the v1 into v2.

  **  Declaring the iterator inside vector-
    vector<int>::iterator it=v.begin();    iterator will point out to v.begin() at memory. (first element of vector).
     it++;
     cout<<*(it)<<" ";         *in this line will access data stored at that memory address   --- print (second element of vector).

    In the very similar way v.end(); will point to the last+1 memory address of vector.
    -                       v.rend(); will point to begin-1 memory address of vector.
    -                       v.rbegin(); will point out to last memory address of vector.
    */

   
    // Print the elements of the vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;  // To ensure output ends with a newline.

    /*
    // Print the elements of the vector using range-based for loop
    for (const auto& x : v) {
    cout << x << " ";
    }
    cout << endl;  // To ensure output ends with a newline

    //print the elements using auto -it will assign automatically iterator to your vector.
    for (auto it=v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl; 

    //print the element using for each loop
    for (auto it : it++) {
        cout << *(it) << " ";
    }
    cout << endl; 
    */

    return 0;
}
/*
    //some more functions related to vector
    v.empty() - returns true if vector is empty otherwise false
    v.size() - returns the size of vector
    v.max_size() - returns the maximum size of vector
    v.capacity() - returns the current capacity of vector
    v.push_back(x) - adds x at the end of vector
    v.pop_back() - removes the last element of vector
    v.insert(it,x) - inserts x at the position pointed by it
    v.erase(it) - removes the element pointed by it
    v.clear() - removes all elements from vector

    //{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4);  we always have to give or point after one in erasing elements upto that element   // 
    // {10,20,35}  [start,end)  work in this way

     // Insert function
    vector<int> v(2, 100);  // {100, 100}
    v.insert(v.begin(), 300);  // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10);  // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);  // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());  // {50, 50, 300, 10, 10, 100, 100}

    cout << v.size() << endl;  // Outputs the size of vector, which is 7

    v.pop_back();  // Removes the last element {50, 50, 300, 10, 10, 100}

    // Swapping two vectors
    vector<int> v1 = {10, 20};
    vector<int> v2 = {30, 40};
    v1.swap(v2);  // v1 becomes {30, 40}, v2 becomes {10, 20}

    // Clear vector
    v.clear();  // Erases the entire vector
    cout << v.empty() << endl;  // Outputs 1 (true) since vector is empty

*/