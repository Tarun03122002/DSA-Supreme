// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/description/
// class Solution {
// public:
//     bool checkKLengthDuplicate(string& s, char currentChar, int k) {
//         int count = 0;
//         int end = s.length() - 1;

//         while (end >= 0) {
//             if (s[end] != currentChar)
//                 return false; // means found unmatching character
//             else
//                 count++;
//             end--;
//             if (count == k - 1) {
//                 return true; //means k length duplicate exist ,so true will cause pop k-1 from ans
//             }
//         }
//         return false;
//     }
//     string removeDuplicates(string s, int k) {
//         string temp = "";
//         int length = s.length();
//         for (int i = 0; i < length; i++) {
//             bool kDuplicateExist = checkKLengthDuplicate(temp, s[i], k);
//             if (temp.empty() || !kDuplicateExist) {
//                 temp.push_back(s[i]);
//                 // cout<<"push "<<i<<endl;
//             } else if (kDuplicateExist) {
//                 // remove k-1 from temp
//                 for (int j = 0; j < k - 1; j++)
//                     temp.pop_back();
//                 // cout<<"pop "<<i<<endl<<temp;

//             }

//         }
//         return temp;
//     }
// };