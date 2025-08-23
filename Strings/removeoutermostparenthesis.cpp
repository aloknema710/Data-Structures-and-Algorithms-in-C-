// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         if(s.size() == 0) return "";
//         string answer = "";
//         int counter = 0;
//         for(int i = 0;i < s.size();i++){
//             if(s[i] == ')') counter--;
//             if(counter != 0) answer.push_back(s[i]);
//             if(s[i] == '(') counter++;
//         }
//         return answer;
//     }
// };


/*
Example 1:

Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
Example 2:

Input: s = "(()())(())(()(()))"
Output: "()()()()(())"
Explanation: 
The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".
Example 3:

Input: s = "()()"
Output: ""
Explanation: 
The input string is "()()", with primitive decomposition "()" + "()".
After removing outer parentheses of each part, this is "" + "" = "".
 
*/