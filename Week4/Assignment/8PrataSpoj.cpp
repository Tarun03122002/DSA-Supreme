#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolution(vector<long long>& cookRanks,
                        long long nP,
                        long long mid)
{
    long long currP = 0;

    for (int i = 0; i < cookRanks.size(); i++)
    {
        long long R = cookRanks[i];
        long long j = 1;
        long long timeTaken = 0;

        // Current cook kitne parathe mid time mein bana sakta hai
        while (timeTaken + j * R <= mid)
        {
            currP++;

            // Required parathe mil gaye
            if (currP >= nP)
                return true;

            timeTaken += j * R;
            j++;
        }
    }

    return false;
}

long long minTimeToCompleteOrder(vector<long long>& cookRanks,
                                 long long nP)
{
    long long start = 0;

    // Highest rank = slowest cook
    long long timeTakenByHighRankCook =
        *max_element(cookRanks.begin(), cookRanks.end());

    // Agar slowest cook saare parathe banaye
    long long end =
        timeTakenByHighRankCook * nP * (nP + 1) / 2;

    long long ans = -1;

    while (start <= end)
    {
        long long mid = start + (end - start) / 2;

        if (isPossibleSolution(cookRanks, nP, mid))
        {
            ans = mid;

            // Minimum time find karna hai
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long nP;
        int cooks;

        cin >> nP >> cooks;

        vector<long long> cookRanks(cooks);

        for (int i = 0; i < cooks; i++)
        {
            cin >> cookRanks[i];
        }

        cout << minTimeToCompleteOrder(cookRanks, nP) << '\n';
    }

    return 0;
}