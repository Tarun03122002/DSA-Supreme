
// C++ Program for the above approac
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

// Brute Force -> compare each of arr 1 with arr 2 if it equal then add in  array only if it does not exist in array
// Tc -> O(n*m*n) Sc -> O(1)

// Better -> using hash set -> Tc -> O(n*m) Sc -> O(n)

// Optimal -> sort and find common elements using 2 pointers 
// TC -> O(nlogn+mlogm) sc-> O(1)

// Optimal using map to store count of element if it 1 then push in ans 
// function prints intersection of arr1 and arr2
void printIntersection(vector<int> arr1, vector<int> arr2, int m, int n){
    // sort(arr1.begin(), arr1.end());
    // sort(arr2.begin(), arr2.end());
    // int i = 0;
    // int j = 0; 
    // while(i < m && j < n){
    //     if(arr1[i] < arr2[j]){
    //         i++;
    //     }
    //     else if (arr2[j] < arr1[i]){
    //         j++;
    //     }
    //     else{
    //         cout<<arr2[j]<<" ";
    //         i++;
    //         j++;
    //     }
    // }
    //issue in above logic

    class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto it:nums1){
            if(mp[it]==0){
                mp[it]++;
            }
        }

        for(auto it:nums2){
            if(mp[it]==1){
                ans.push_back(it);
                mp[it]--;
            }
        }

        return ans;
    }
};

}
 
// // driver program to test above functions
int main(){
    vector<int> arr1 = { 7, 1, 5, 2, 3, 6 };   
    vector<int> arr2 = { 3, 8, 6, 20, 7,7 };   
    int m = arr1.size();
    int n = arr2.size();
     
    // // function call
    // cout<<"Union of two arrays is : ";
    // printUnion(arr1, arr2, m, n);
     
    cout<<endl<<"Intersection of two array is : ";
    printIntersection(arr1, arr2, m, n);
}