#include <bits/stdc++.h>
using namespace std;

int countWords(const string& str) {
  // Handle empty string case
  if (str.empty()) return 0;
  
  stringstream ss(str);
  string word;
  int count = 0;
  
  // Count words by splitting on whitespace
  while (ss >> word) {
      count++;
  }
  
  return count;
}
int main() {
  string input;
  
  cout << "Enter a string: ";
  getline(cin, input);  // Read entire line including spaces
  
  int wordCount = countWords(input);
  
  cout << "Number of words in the string: " << wordCount << endl;
  
  return 0;
}

// int countWords(const string& str) {
//     int count = 0;
//     bool inWord = false;
    
//     for (char c : str) {
//         if (isspace(c)) {
//             inWord = false;
//         } else if (!inWord) {
//             inWord = true;
//             count++;
//         }
//     }
    
//     return count;
// }

// int main() {
//     string input;
    
//     cout << "Enter a string: ";
//     getline(cin, input);
    
//     cout << "Number of words in the string: " << countWords(input) << endl;
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// // Issues:
// // Leading and trailing spaces: If the string has leading or trailing spaces,
// // your code will count them as part of the word count. For example, " Hello world " would be counted as 3 words instead of 2.

// // Multiple consecutive spaces: If there are multiple spaces between words (e.g., "Hello world"), 
// //the current code will count extra spaces as additional words.

// int noofwords(string str, int n){
//   if (str.empty()) {
//     cout << "The number of words are 0";
//     return 0;
//   }

//   int spaces=1;
  
//   for(int i=0; i<n; i++){
//       if(str[i]==' ')
//         spaces= spaces+1;
//   }
// }

// int main() {

//   string str;
//   getline(cin,str);
//   int n = str.length();
//   cout<<"The number of words are "<< noofwords(str,n);
//   return 0;
// }