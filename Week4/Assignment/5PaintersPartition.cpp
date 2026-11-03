// https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
// class Solution {
//   public:
//     bool isPossibleSolution(vector<int>&arr,int k,long long solution){
//         int timeAssigned=0,painterCount=1;
//         for(int i=0;i<arr.size();i++){
//             if(timeAssigned + arr[i]<=solution){
//                 timeAssigned+=arr[i];
//             }else{
//                 painterCount++;
//                 if(painterCount>k || arr[i]>solution){return false;}
//                 timeAssigned=arr[i];
//             }
//         }
//         return true;
//     }
//     int minTime(vector<int>& arr, int k) {
//         // code here
//         int ans = -1;
//         long long start = LLONG_MIN ;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]>start){
//                 start=arr[i];
//             }
//         }
//         long long end = accumulate(arr.begin(),arr.end(),0LL);
        
//         while(start<=end){
//             long long mid = start +(end-start)/2;
//             if(isPossibleSolution(arr,k,mid)){
//                 ans = mid;
//                 end= mid-1;
//             }else{
//                 start=mid+1;
//             }
//         }
//         return ans;
//     }
// };