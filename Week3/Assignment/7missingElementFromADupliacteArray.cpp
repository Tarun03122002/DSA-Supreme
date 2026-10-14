// missingElementFromADupliacteArray

#include<iostream>
using namespace std;

//i/p {2,1,2,3,4} a[i]~[1,n] o/p 5  
// n=5

//missing element one or more
void missingElmentFromDuplicateArray(int arr[],int n){
    // brute force Tc->O(n*n)


    for(int i=1;i<=n;i++){
        int j=0,count=0;
        for(j=0;j<n;j++){
            if(arr[j]==i){
                count++;
            }
        }
        if(count==0){
            cout<<i<<" ";
        }
    }


}
//sum method (constraints work if duplicate element count is 2 and missing element is 1)

int negativeMarkingMethod(int arr[],int n){
    int duplicate = -1;
    //negative marking method
    for(int i=0;i<n;i++){
        int index = abs(arr[i]);

        //already marked
        if(arr[index-1]<0){  //index-1 bcoz arr[5] is also possible in that case out of bound 
            duplicate = index;
            break;
        }

        //marked visited
        arr[index-1] *= -1;
    }
    return duplicate;
}
int sumMethod(int arr[],int n){
    //find only 1 missing number what if array is(3,3,3,3) so missing elements (1,2,4)
    int duplicate = negativeMarkingMethod(arr,n);
    int totalSum = n*(n+1)/2; //n=5 (15)

    //sum of array elements
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(arr[i]); //12
    }

    // sum mei 1 element  duplicate  hai which is added twice so we have to minus duplicate element to get the missing number
    sum-=duplicate;//sum of n-1 elements (without duplicate) ->(10)

    int ans = totalSum - sum;  //(15)-10
    return ans;

    //tc -> O(n)
    //sc->O(1)
}

//negative Marking method
void visitedMethod(int arr[],int n){
    // jo element present hai unhe mark kro (negative bnao)
    // jo nhi hai woh  postive honge unka index+1 return krao
    for(int i=0;i<n;i++){
        int index = abs(arr[i]);
        if(arr[index-1]>0){
            //mark visted
            arr[index-1]*=-1;
        }
    }

    cout<<"All positive indices are missing :\n";//positive indices == jinka arr[i]>0 hai
    //positive isliye bcoz woh element presnt nhi hai toh return index+1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }

    // tc -> O(n)
    // sc -> o(1) 
}


//sorting + swapping method
void positioningMethod(int arr[],int n){
    //har element ko uski position pr pahuchao jb tk saare element apni position pr  na pahuache 
    //indexing 1 based

    int i=0;
    //my approach
    // while(arr[i]!=arr[arr[i]]){
    //     int index = arr[i];
    //     swap(arr[i++],arr[index-1]);
    // }

    //bhaiya approach
    while(i<n){
        int index = arr[i];
        if(arr[i]!=arr[index-1]){
            swap(arr[i],arr[i-1]);
        }else{
            i++;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }
    }
}
int main(){

    int arr[] = {2,2,2,2,2};
    int n = 5;
    // missingElmentFromDuplicateArray(arr,n);

    visitedMethod(arr,n);
    // positioningMethod(arr,n);

    return 0;
}