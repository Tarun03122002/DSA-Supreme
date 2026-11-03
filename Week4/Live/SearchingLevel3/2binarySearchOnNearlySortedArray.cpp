#include<iostream>
#include<vector>
using namespace std;

//duplicate ke case mei yeh code first occurence dega
// int binarySearchOnNearlySortedArray(vector<int>& arr,int target){
//     int n = arr.size();
//     int s = 0 , e = n-1;

//     while(s<=e){
//        int m = s + (e - s)/2;

//        if(m-1>= 0 && arr[m-1]==target){ 
//         return m-1;
//        }

//        if(arr[m] == target){
//             return m;
//        }
       
//        if(m+1 < n && arr[m+1]==target){
//         return m+1;
//        }

//        if(target > arr[m]){
//         //right
//         s = m + 2; //+2 to avoid comparsion again of same values
//        }else{
//         //left
//         e = m - 2;
//        }
//     }

//     return -1;
// }

// TC -> O(logn)
// SC -> O(1)

//duplicate ke case mei yeh code last occurence dega
int binarySearchOnNearlySortedArray(vector<int>& arr,int target){
    int n = arr.size();
    int s = 0 , e = n-1;
    int ans = -1;
    while(s<=e){
       int m = s + (e - s)/2;

       if(m-1>= 0 && arr[m-1]==target){ 
         ans = m-1;
       }

       if(arr[m] == target){
            ans = m;
       }
       
       if(m+1 < n && arr[m+1]==target){
         ans = m+1;
       }

       if(target > arr[m]){
        //right
        s = m + 2; //+2 to avoid comparsion again of same values
       }else{
        //left
        e = m - 2;
       }
    }

    return ans;
}
int main(){

    vector<int> arr = {20,10,30,50,40,70,60,70};
    int target = 30;
    int ans = binarySearchOnNearlySortedArray(arr,target);
    cout<<ans;
    return 0;
}