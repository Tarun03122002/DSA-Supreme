// https://leetcode.com/problems/find-k-closest-elements

// class Solution {
// public:
//     vector<int> bruteForce(vector<int>& arr, int k, int x) {
//         // sort on basis of diff closest to x
//         sort(arr.begin(), arr.end(), [x](int a, int b) {
//             int diff1 = abs(a - x); 
//             int diff2 = abs(b - x); 
//             if (diff1 == diff2) {
//                 return a < b;
//             }
//             return diff1 < diff2; // true condition means a comes before b
//             // false condition b comes before a
//             // remember < means increasing order
//             // > means descending order
//         });
//         // return first k elements in sorted order
//         vector<int> ans(arr.begin(),arr.begin()+k);
//         sort(ans.begin(),ans.end());
//         return ans;
//         // tc -> O(nlogn)
//         // sc -> O(1) if heap sort
//     }

//     vector<int> twoPtr(vector<int>& arr,int k,int x){
//         int n = arr.size();
//         int l=0,h=n-1;
//         while( h-l >=k){
//             if(x - arr[l] > arr[h]-x){
//                 l++;
//             }else{
//                 h--;
//             }
//         }
//         vector<int>ans(arr.begin()+l,arr.begin()+h+1);
//         return ans;
//         // tc -> O(n)
//         // sc-> O(1)
//         // top to bottom approach -> l=0 h=size -1 window size decrease to find exact window for ans
//     }

//     int bs(vector<int>& arr,int target){
//         int ans = arr.size()-1; // [1,2,3,4,5] target=6 it is returing -1 so store end in ans 
//         int s=0,e=arr.size()-1;
//         while(s<=e){
//             int m = s +(e-s)/2;
//             if(target == arr[m]){
//                 return m;
//             }else if(target > arr[m]){
//                 //right mei jao
//                 s=m+1;
//             }else{
//                 ans = m;
//                 e = m - 1;
//             }
//         }
//         return ans;
//     }
//     // bottom to top
//     vector<int> binary_search(vector<int>& arr,int k,int x){
//         // 1) first find element index closest or equal to x -> lower bound
//         // 2)  l=index-1 h=index
//         // 3) find window based on certain condition
//         // 4) if(x-arr[l]>arr[h]-x){
//         // // h is first closest currently l is second closest,to find third closest we expect it will be after h so do h++;
//             // h++;
//         // }
//         // else{ l--;}
//         //  while condition(k--)
//         // also check outer bound if h>=arr.size() then do l--;
//         // if(l<0) then do h++
//         int lowerBound = bs(arr,x);
//         cout<<lowerBound<<" "<<endl;
//         int h=lowerBound,l=lowerBound-1;
//         while(k--){
//             if(l<0){
//                 h++;
//             }else if(h>=arr.size()){
//                 l--;
//             }
//             else if(x - arr[l] > arr[h] - x){
//                 h++;
//                 // h is first closest currently l is second closest,to find third closest we expect it will be after h so do h++;
//             }else{
//                 l--;
//             }
//         }
//         vector<int> ans(arr.begin()+l+1,arr.begin()+h);
//         return ans;
//         // tc -> O(logn)
//         // sc -> O(1)
//     }

//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         // return bruteForce(arr, k, x);
//         return twoPtr(arr,k,x);
//         // return binary_search(arr,k,x);
//     }
// };