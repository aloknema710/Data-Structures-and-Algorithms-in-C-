#include <iostream>
#include <vector>
#include <utility>  // For std::pair

using namespace std;

int main() {
    // Create a vector of pairs, where each pair consists of an int and a string
    /*      
    Defining vector of pair data type -
    vector<pair<int, int>>vec;
    */
    
    vector<pair<int, string>> vec;

    // Add some pairs to the vector
    vec.push_back(make_pair(1, "apple"));
    vec.push_back(make_pair(2, "banana"));
    vec.push_back(make_pair(3, "cherry"));

    // Access and print the pairs
    for (const auto& p : vec) {
        cout << "ID: " << p.first << ", Fruit: " << p.second << endl;
    }
    return 0;
}
