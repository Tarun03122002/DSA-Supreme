#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

vector<int> unionTwoArrays(vector<int>& a,vector<int>& b){
    vector<int> ans;
    int a_size=a.size();
    int b_size=b.size();

    for(int i=0;i<a_size;i++){
        ans.push_back(a[i]);
    }
    for(int i=0;i<b_size;i++){
        ans.push_back(b[i]);
    }

    return ans;
}

// eg -> i//p {1,2,4,8,3}  {2,5,6,3} o/p{1,2,4,8,3,5,6} 

//union in case of duplicate exists
vector<int> unionTwoArraysDuplicateCase(vector<int>& a,vector<int>& b){
    int a_size = a.size();
    int b_size = b.size();

    //check common elements in both array and mark as INT_MIN
    for(int i=0;i<a_size;i++){
        for(int j=0;j<b_size;j++){
            if(a[i]==b[j]){
                b[j]=INT_MIN;
            }
        }
    }
    
    vector<int> ans;
    for(int i=0;i<a_size;i++){
        ans.push_back(a[i]);
    }
    for(int i=0;i<b_size;i++){
        if(b[i]!=INT_MIN) //if a element is not INT_MIN,then only it will be added and we have marked INT_MIN for those elements which are present in both arrays so duplicate will be avoided
            ans.push_back(b[i]);
    }

    return ans;
}

void printVector(vector<int> a){
    for(auto it : a){
        cout<<it<<" ";
    }
    cout<<endl;
}

// actual above two logic for union both are incorrect 
// both should gives only unique distinct(only one ocurrence) element

vector<int> unionOfTwoArrays(vector<int> &arr1, vector<int> &arr2)
{
    // wheneveer we are pushing ans,check if it already exists or not in vector if laready exist do not add 
    // Approach 1  -> using traverse element and linear search if element if exist or not
    // vector<int> ans;
    // for (const auto &it : arr1)
    // {
    //     if (find(ans.begin(), ans.end(), it) == ans.end())
    //     {
    //         // it -> target == end() it means not found so add in and
    //         ans.push_back(it);
    //     }
    // }
    // for (const auto &it : arr2)
    // {
    //     if (find(ans.begin(), ans.end(), it) == ans.end())
    //     {
    //         // it -> target == end() it means not found so add in and
    //         ans.push_back(it);
    //     }
    // }
    // return ans;
    //Tc -> O(n+m)^2 Sc -> O(1)

    // using set DS
    set<int> st;

    for(const auto &it:arr1){
        st.insert(it);
    }
    for(const auto&it:arr2){
        st.insert(it);
    }
    vector<int> ans;
    for(const auto&it:st){
        ans.push_back(it);
    }
    return ans;
    // TC -> O(n+m)
    // Sc -> O(n+m);

}

// sorting and merge uisng 2 pointers
// function to print the Union fo two arrays both array contain unique distinct 
// arrays arr1 and arr2
void printUnion(vector<int> nums1, vector<int> nums2, int m, int n){
    // sort(arr1.begin(), arr1.end());
    // sort(arr2.begin(), arr2.end());
    // int i = 0;
    // int j = 0;
    // while(i < m && j < n){
    //     if(arr1[i] < arr2[j]){
    //         cout<<arr1[i]<<" ";
    //         i++;
    //     }
    //     else if(arr2[j] < arr1[i]){
    //         cout<<arr2[j]<<" ";
    //         j++;
    //     }
    //     else{
    //         cout<<arr2[j]<<" ";
    //         i++;
    //         j++;
    //     }
    // }
     
    // // printing remaining elemens fo the alrger array
    // while(i < m){
    //     cout<<arr1[i]<<" ";
    //     i++;
    // }
    // while(j < n){
    //     cout<<arr2[j]<<" ";
    //     j++;
    // }

    //above logic not work for duplicate eleemnet in two arary

    // vector<int> ans;
    unordered_map<int,int> mp;
    for(int i=0;i<nums1.size();i++) mp.insert({nums1[i],i});
    for(int j=0;j<nums2.size();j++) mp.insert({nums2[j],j});

    // for(auto itr = mp.begin();itr!=mp.end();itr++){
    for(auto itr : mp){
        // ans.push_back(itr->first);
        cout<<itr.first<<" ";
    }
    // return ans;
}
//  Tc -> O(nlogn+mlogm) sc->O(1) heap sort does not take extra space

int main(){
    vector<int> arr1={12,13,13,4,45,15};
    vector<int> arr2={2,13,1,15};

    vector<int> union1 = unionTwoArrays(arr1,arr2);
    printVector(union1);

    vector<int> union2 = unionTwoArraysDuplicateCase(arr1,arr2);
    printVector(union2);

    
    return 0;
}