// class Solution {
// 	public:
	
// 	bool isPossibleSolution(vector<int>&arr,int k,long long solution){
// 	    int studentCount = 1;
// 	    long long pagesAssigned = 0;
// 	    for(int i=0;i<arr.size();i++){
// 	        if(pagesAssigned + arr[i]<=solution){
// 	            pagesAssigned+=arr[i];
// 	        }else{
// 	            studentCount++;
// 	            if(studentCount>k || arr[i]>solution){
// 	                return false;
// 	            }
// 	            //reset pagesAssigned for nextStudent
// 	            pagesAssigned=arr[i];
// 	        }
// 	    }
// 	    return true;//possible solution
// 	}
// 	int findPages(vector<int> &arr, int k) {
// 		// code here
		
// 		if(k>arr.size()) return -1;
// 		int ans = -1;
// 		long long start = LLONG_MIN ;
// 		for(int it:arr){
// 		    start = max(start,(long long)it);
// 		}
// 		long long end = accumulate(arr.begin(), arr.end(), 0LL);
		
// 		while (start <= end) {
// 			long long mid = start + (end - start)/2;
// 			if (isPossibleSolution(arr,k,mid)) {
// 				// store and move to left to find minimum possible solu
// 				ans = mid;
// 				end = mid - 1;
// 			} else {
// 				start = mid + 1;
// 			}
// 		}
//      return ans;		
// 	}
// };
