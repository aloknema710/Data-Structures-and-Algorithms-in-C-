// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         if (s.length() != goal.length()) {
//             return false;
//         }
//         string concatenated = s + s;
//         return concatenated.find(goal) != string::npos;
//     }
// };

// class Solution {
// public:
//     bool rotateString(string s, string t) {

//         if( s.size() != t.size()) 
//             return false; 
            
//         int n = t.size();
//         for(int i =0;i< n ;i++)
//         {
//             if(s[0] == t[i])
//             {
//                 int j = 0;
//                 while( j < n)
//                 {
//                     if(s[j] != t[(i+j)%n]) 
//                         break;
                    
//                     j++;
//                 }

//                 if(j == n) 
//                     return true;
//             }
//         }
        
//         return false;
//     }
// };