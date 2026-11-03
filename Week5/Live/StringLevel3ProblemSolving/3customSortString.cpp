// https://leetcode.com/problems/custom-sort-string/


// class Solution {
// public:

//     static string str;
//     static bool myComparator(char ch1,char ch2){
//         //this will return true,if position of character ch1 in string str is less than the position of
//         //character ch2 in string str
//         //this will return false,if position of character ch1 in string str is greater than position of
//         //character ch2 in string str

//         //if return true ,it means ch1 will be placed before ch2  in the output string
//         //if return false,it means ch2 will be placed before ch1 in the output string(given test case
//         //follow this condition)

//         return (str.find(ch1)<str.find(ch2));
//     }

//     string customSortString(string order, string s) {
//         str = order;
//         sort(s.begin(),s.end(),myComparator);
//         return s;
//     }
    // TC ->O(nlogn)
    //Sc ->O(n)(inbuilt sorting)
// };
// string Solution::str;


// class Solution {
// public:

//     string customSortString(string order, string s) {
//         // using custom comparator
//         sort(s.begin(),s.end(),[order](char a,char b){
//                     return order.find(a) < order.find(b);    
//         });
//         return s;
//     }
// };