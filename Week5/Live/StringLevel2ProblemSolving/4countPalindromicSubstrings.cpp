// https://leetcode.com/problems/palindromic-substrings/description/
// class Solution {
// public:
//     int checkPalindrome(string str){
//         int s=0,e=str.length()-1;
//         while(s<e){
//             if(str[s]!=str[e]) return false;
//             s++,e--;
//         }
//         return true;
//     }
//     int bruteForce(string s){
//         // Find all substring and check that substring is palindorme or not
//         // if palindrome increase count
//         int count = 0;
//         int length = s.length();
//         vector<string> subStrs;
//         for(int i=0;i<length;i++){
//             string subStr;
//             for(int j=i;j<length;j++){
//                 subStr.push_back(s[j]);
//                 subStrs.push_back(subStr);
//             }
//         }
//         for(auto it:subStrs){
//            if(checkPalindrome(it)){
//             count++;
//            }
//         }
//         return count;
//         // tc->O(n^3)
//         // sc -> O(subs) number of substrigs
//     }

//     int expand(string& s,int i,int j){
//         int n = s.length();
//         int count =0;
//         while(i>=0 && j<n){
//             if(s[i]==s[j]){
//                 count++;
//                 i--,j++;
//             }else{
//                 return count;
//             }
//         }
//         return count;
//     }
//     int optimalCountSubstrings(string& s){
//         int countPalindrome = 0;
//         int length = s.length();
//         for(int i=0;i<length;i++){
//             // Count odd length palindrome
//             countPalindrome+=expand(s,i,i);
//             // count even length palindrome;
//             countPalindrome+=expand(s,i,i+1);
//             // cout<<countPalindrome<<endl;
//         }
//         return countPalindrome;
//     }
//     int countSubstrings(string s) {
//         // return bruteForce(s);
//         // optimal by using expanding pattern
//         return optimalCountSubstrings(s);
//     }
// };