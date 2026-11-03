#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print2dArray(vector<vector<int> >& arr){
    // for(auto it : arr){
    //     for(auto a : it){
    //         cout<<a<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<endl;
    for(int i=0;i<arr.size();i++){
      vector<int>& t =arr[i];
        cout<<t[0]<<" "<<t[1]<<endl;
    }

    cout<<endl;
}

bool myComparator(vector<int>& a,vector<int>& b){
    // return a[0]<b[0];sorting based on O index
    // return a[1]<b[1];//sorting based on 1 index increasing order
    return a[1]>b[1];//sorting based on 1 index descending order
}

int main(){

    int n;
    cin>>n;
    vector<vector<int>> arr;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vector<int> a1;
        a1.push_back(a);
        a1.push_back(b);
        arr.push_back(a1);
    }
    
    cout<<"Before sorting\n";
    print2dArray(arr);

    // sort(arr.begin(),arr.end()); //sorting based on O index of vector ,if index 0 value same of two vectors then index 1 sorting comes

    sort(arr.begin(),arr.end(),myComparator); 
   
    cout<<"After sorting\n";
    print2dArray(arr);
}