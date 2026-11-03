// https://leetcode.com/problems/k-diff-pairs-in-an-array/
// class Solution {
// public:
//     int bruteForce(vector<int>& nums, int k) {
//         // compare each and every pair
//         int n = nums.size();
//         set<pair<int, int>> st;
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (abs(nums[i] - nums[j]) == k) {
//                     cout << i << " " << nums[i] << " " << nums[j] << endl;
//                     st.insert({min(nums[i], nums[j]), max(nums[i], nums[j])});
//                 }
//             }
//         }

//         return st.size();
//         // TC -> O(n^2)
//         // sc-> O(n)
//     }
//     int sortingAnd2Pointer(vector<int>& nums, int k) {
//         // 1 1 3 4 5
//         sort(nums.begin(), nums.end());
//         int i = 0, j = 1, n = nums.size();
//         set<pair<int, int>> st;
//         while (j < n) {
//             int diff = nums[j] - nums[i];
//             if (diff == k) {
//                 cout << nums[i] << " " << nums[j] << endl;
//                 st.insert({nums[i], nums[j]});
//                 i++, j++;
//             } else if (diff > k) {
//                 i++; // toh diff km hoga bcoz array sorted hai
//                 // j++ kiya toh  diff aur bdega
//             } else {
//                 j++; // diff km hai abhi toh bdana hai toh j++
//             }
//             if (i ==
//                 j) { // kisi case mei agar i and j equal toh phir se set krenge
//                 j++;
//                 // [1,3,1,5,4] k=0 test case
//             }
//         }
//         return st.size();
//         // tc -> O(nlogn)
//         // sc-> O(n)
//     }

//     int sortingAndBinarySearch(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         set<pair<int, int>> st;
//         for (int i = 0; i < n - 1; i++) {
//             int s = i + 1, e = n - 1;
//             int target = nums[i] + k;
//             while (s <= e) {
//                 int m = s + (e - s) / 2;
//                 if (target == nums[m]) {
//                     st.insert({nums[i], nums[m]});
//                     break;
//                 } else if (target > nums[m]) {
//                     s = m + 1;
//                 } else {
//                     e = m - 1;
//                 }
//             }
//         }
//         return st.size();
//         // Tc -> O(nlogn)
//         // sc -> O(n)
//     }

//     int mapAndSet(vector<int>& nums, int k) {
//         int n = nums.size();
//         unordered_map<int, int> mp;
//         set<pair<int, int>> st;
//         for (int i = 0; i < n; i++) {
//             int moreNeeded1 = nums[i] - k;
//             int moreNeeded2 = nums[i] + k;
//             if (mp.find(moreNeeded1) != mp.end()) {
//                 st.insert(
//                     {min(moreNeeded1, nums[i]), max(moreNeeded1, nums[i])});
//             }
//             if (mp.find(moreNeeded2) != mp.end()) {
//                 st.insert(
//                     {min(moreNeeded2, nums[i]), max(moreNeeded2, nums[i])});
//             }
//             mp[nums[i]]++;
//         }
//         return st.size();
//     }
//     int findPairs(vector<int>& nums, int k) {
//         // return bruteForce(nums,k);
//         // return sortingAnd2Pointer(nums,k);
//         // return sortingAndBinarySearch(nums,k);
//         return mapAndSet(nums, k);
//     }
// };