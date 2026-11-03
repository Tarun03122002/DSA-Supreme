// class Solution {
//   public:
//     bool isPossibleSolution(vector<int>&arr,int k,int solution){
//         int cowCount = 1;
//         int lastPos = arr[0];
//         for(int i=1;i<arr.size();i++){
//             if(arr[i]-lastPos>=solution){
//                 cowCount++;
//                 if(cowCount == k) return true;
//                 lastPos = arr[i];
//             }
//         }
//         return false;
        
//     }
//     int aggressiveCows(vector<int> &arr, int k) {
//         // code here
//         sort(arr.begin(),arr.end());
//         int ans = -1;
//         long long min = LLONG_MAX;
//         long long max = LLONG_MIN;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]>max){
//                 max=arr[i];
//             }
//             if(arr[i]<min){
//                 min = arr[i];
//             }
//         }
//         long long start =0;
//         long long end = max-min;
//         while(start<=end){
//             int m = start + (end-start)/2;
//             if(isPossibleSolution(arr,k,m)){
//                 ans = m;
//                 //to maximize;
//                 start=m+1;
//             }else{
//                 end=m-1;
//             }
//         }
//         return ans;
//     }
// };