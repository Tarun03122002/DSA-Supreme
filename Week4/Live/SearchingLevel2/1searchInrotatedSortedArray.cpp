// https://leetcode.com/problems/search-in-rotated-sorted-array/

// class Solution {
// public:
//     int findPivotIndex(vector<int>& nums){
//         int n = nums.size();
//         int s = 0,e=n-1;
//         while(s<=e){
//             int m = s + (e-s)/2;
//             //corner case array size = 1
//             if(s==e){
//                 return s;
//             }
//             if( m-1>=0 && nums[m] < nums[m-1]){
//                 return m-1;
//             }else if(m+1 <n && nums[m]>nums[m+1]){
//                 return m;
//             }else if(nums[s]>nums[m]){
//                 // b line pr hai left mei jao
//                 e = m - 1;
//             }else{
//                 //a line pr hai right mei jao
//                 s = m + 1;
//             }
//         }
//         return -1;
//     }

//     int binarySearch(vector<int>&nums,int s,int e,int target){
//         while(s<=e){
//             int m = s + (e-s)/2;
//             if(nums[m]==target){
//                 return m;
//             }else if(target > nums[m]){
//                 //right mei jao
//                 s = m +1;
//             }else{
//                 //left mei jao
//                 e = m-1;
//             }
//         }
//         return -1;
//     }

//     int search(vector<int>& nums, int target) {
//         int pivotIndex = findPivotIndex(nums);
//         int n = nums.size();
//         int ans = -1;

//         //check in which part binary search need to be applied
//         if( target >= nums[0] && target<=nums[pivotIndex]){
//             //A part pr binary search lgao
//             ans = binarySearch(nums,0,pivotIndex,target);
//         }else{
//             //B part pr binary search lgao
//             ans = binarySearch(nums,pivotIndex+1,n-1,target);
//         }

//         return ans;

//         //TC ->O(logn)+O(logn)->O(logn)
//         //SC -> O(1)
//     }
// };


//LC:153
// int findPivotElementIndex(vector<int> &nums)
// {
//     int ans = -1;
//     int s = 0, e = nums.size() - 1;
//     while (s <= e)
//     {
//         int m = s + (e - s) / 2;
//         if (nums[m] > nums[nums.size() - 1])
//         {
//             // we are on left line
//             // either it is ans or ans is in right
//             ans = m;
//             s = m + 1;
//         }
//         else
//         {
//             // right mei hai
//             // move to left
//             e = m - 1;
//         }
//     }
//     return ans;
// }
// int findMin(vector<int> &nums)