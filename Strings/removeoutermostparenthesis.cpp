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