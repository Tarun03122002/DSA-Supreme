// 1d vector
#include<iostream>
#include<vector>

using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size+1000;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void printVector(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void printVector2(vector<int> arr){
    //for each loop
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
}

void vector2D(){
  vector< vector<int> > arr1;
  vector< vector<int> > arr2(10,vector<int> (10,-1));
  //vector of vector of int 
  // name is arr2
  //arr2(size,intitialize)
  //arr2 has size 10(i.e row size=10) and is initialized with vector of int
  //every row of vector is initialized with vector having 10 columns and default value is -1
  //100 size 2d array with -1 as default value

  //print 2d vector
//   for(int i=0;i<arr2.size();i++){
//     for(int j=0;j<arr2[i].size();j++){
//       cout<<arr2[i][j]<<" ";
//     }
//     cout<<endl;
//   }

  //jagged array -> every row has different size

  vector< vector<int> > arr3;

  vector<int> arr4(4,0);
  vector<int> arr5(10,-2);
  vector<int> arr6(2,1);
  vector<int> arr7(5,101);

  arr3.push_back(arr4);
  arr3.push_back(arr5);
  arr3.push_back(arr6);
  arr3.push_back(arr7);

for(int i=0;i<arr3.size();i++){
    for(int j=0;j<arr3[i].size();j++){
        cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
}

}
 

int main(){

    //static array==fixed size array
    // int arr1[5]={0,1,2,3,4};
    // arr1[5]=12;
    // arr1[5]=12;
    // arr1[15]=12;  //can't do in static array
    // arr1[25]=12;

    // int size;
    // cin>>size;
    // int arr[size];  //dynamic array but user might need array which takes space larger than the space/memory given to a  program .Also in some compiler, it will not work

    // DMA(Dynamic memory allocation) created at run time (but not a dynamic array)
    // int *arr2 =new int [size];


    // for(int i=0;i<size;i++){
    //     cin>>arr2[i];
    // }
    // for(int i=size;i<1000;i++)
    //     arr2[i]=20;
    // printArray(arr2,size);



    // DMA and dynamic array(grow and shrink)

    /* vector declaration  ***************************************/
    //  // in vector, dont tell size of vector.
    //  // just keep inserting, it will manage the allocations.
    //  vector<int> v; // array hi hai.



    // vector_name(size,defaultValue)

    // vector<int> arr;//default with no data and size 0

    // vector<int> arr1(10);//default with 0 data and size 10
    // for(int i=0;i<arr1.size();i++){
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<endl;
    // vector<int> arr2(10,-1);//default with 0 data and size 10
    // for(int i=0;i<arr2.size();i++){
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<endl;
    // arr2.push_back(12);
    // arr2.push_back(13);
    // for(int i=0;i<arr2.size();i++){
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<endl;

    // vector<int> arr3 = {12,3,45,5};
    // arr3.push_back(12); //insert last index se hoga
    // printVector(arr3);
    // cout<<endl;

    // vector<int> arr4{12,3,45,5};
    // arr4.pop_back();//remove last index se hoga
    // printVector(arr4);
    // cout<<endl;

    // // // // how to copy vector
    // vector<int> arr5(arr4);
    // printVector(arr5);


    // int n;
    // cin>>n;
    // vector<int> arr6(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr6[i];
    // }
    // arr6.push_back(12);
    //  printVector(arr6);
   

    // // clear the vector
    // arr6.clear();//clear the array ==array ka size 0 ho jaayega
    // cout<<"\n"<<arr6.size()<<"\n";
    // cout<<arr6.empty()<<endl;// return 1 if array is empty else return 0

    // //accessing front element
    // cout<<arr5[0]<<endl;
    // cout<<arr5.front()<<endl;
    // //accessing back element
    // cout<<arr5[arr5.size()-1]<<endl;
    // cout<<arr5.back()<<endl;

    // printVector2(arr3);

    //accessing vector element 
    // using [] vectorName[index]
    // using at(index) vectorName.at(index)
    // cout<<arr3.at(2)<<endl;
    // cout<<arr3.at(4)<<endl;
    // cout<<arr3.at(5)<<endl; invalid index out of range error


    vector2D();


    return 0;
}