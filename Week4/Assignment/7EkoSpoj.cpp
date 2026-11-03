#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//my method
// bool isPossibleSolution(vector<long long int> &treeHeight, long long int woodReq, long long int heightOfBlade)
// {
//     long long woodsGetAfterCuttingFromAllTrees = 0;
//     for (int i = 0; i < treeHeight.size(); i++)
//     {
//         long long currentTreeWoodGetAfterCutting = treeHeight[i] - heightOfBlade;
//         if (currentTreeWoodGetAfterCutting < 0)
//             currentTreeWoodGetAfterCutting = 0;
//         woodsGetAfterCuttingFromAllTrees += currentTreeWoodGetAfterCutting;
//     }
//     if (woodsGetAfterCuttingFromAllTrees >= woodReq)
//         return true;
//     return false;
// }
bool isPossibleSolution(vector<long long int> &treeHeight, long long int woodReq, long long int heightOfBlade)
{
    long long woodsGetAfterCuttingFromAllTrees = 0;
    for (long long int i = 0; i < treeHeight.size(); i++)
    {
       if(treeHeight[i]>heightOfBlade)
        woodsGetAfterCuttingFromAllTrees += treeHeight[i] - heightOfBlade;
    }
    return woodsGetAfterCuttingFromAllTrees >= woodReq;
}
long long int maxHeightOfBladeToGetRequiredWood(vector<long long int> &treeHeight, long long int woodReq)
{
    long long int start = 0;       // Cut all trees entirely to get max Wood
    long long int end = LLONG_MIN; // cut min trees to get 0 wood
    long long int ans = -1;
    // for (int i = 0; i < treeHeight.size(); i++)
    // {
    //     end = max(treeHeight[i], end);
    // }
    end = *max_element(treeHeight.begin(),treeHeight.end());
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;

        if (isPossibleSolution(treeHeight, woodReq, mid))
        {
            // store ans and maximize height of blade so that we acheived closest to wood required(at least > woodReq)
            ans = mid;
            start = mid + 1;
        }
        else
        {
            // if it is not a possible solution
            // means aap itnhi height of blade se at least woodRequired acheive nhi kr paa rhe toh isse zyade waali se bhi nhi kr paayenge
            end = mid - 1;
        }
    }
    return ans;
}
// find maxmising height of blade as much as possible by mimizming by wood cut
int main()
{
    long long int n,woodReq;
    cin>>n>>woodReq;
    vector<long long int> treesHeight;
    while(n--){
        long long int treeHeight;
        cin>>treeHeight;
        treesHeight.push_back(treeHeight);
    }
    cout << maxHeightOfBladeToGetRequiredWood(treesHeight, woodReq);
}
