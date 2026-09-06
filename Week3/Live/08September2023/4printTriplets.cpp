#include<iostream>

using namespace std;

// i/p 10 20
// o/p    10,10,10 
    //    10,10,20  
    //    10,20,10 
    //    10,20,20  
    //    20,10,10
    //    20,10,20
    //    20,20,10
    //    20,20,20



void printTriplets(int arr[],int size){

    
    cout<<"Printing Triplets: \n";
    for(int i=0 ; i<size ;i++){ 
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                cout<< "("<<arr[i] <<","<<arr[j] <<"," <<arr[k] <<")"<<endl;
            }
        }
    }
  
}


int main(){

    int arr[] = {10,20,10};
    int size = 3;
    printTriplets(arr,size);
// 10 10 10
// 10 10 20
// 10 10 10
// 10 20 10
// 10 20 20
// 10 20 10
// 10 10 10
// 10 10 20
// 10 10 10
// 20 10 10
// 20 10 20
// 20 10 10
// 20 20 10
// 20 20 20
// 20 20 10
    return 0;

}