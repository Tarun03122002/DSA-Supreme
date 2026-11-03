// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
        
//         while(s.find(part)!=string::npos){ //Tc O(n)
//             s.erase(s.find(part),part.length()); //Tc O(n)
//         }
//         return s;

//         //Tc O(n)
//         //Sc O(1)
//     }

//     // approach 2 if part exists in string,then ignore it and create a new string from leftsubstring and right substring after ignoring part
//     // do till we are find part
//     int pos = s.find(part);
//     while (pos != string::npos)
//     {
//         string leftSubstr = s.substr(0, pos); // pos will give number of charcters
//         string rightSubstr = s.substr(pos + part.length(), s.length() - 1);
//         s = leftSubstr.append(rightSubstr);
//         pos = s.find(part);
//     }
//     return s;
// };