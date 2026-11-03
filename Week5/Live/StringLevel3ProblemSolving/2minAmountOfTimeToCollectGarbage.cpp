// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/

// class Solution {
// public:
//     int garbageCollection(vector<string>& garbage, vector<int>& travel) {
//         int pickM = 0;
//         int pickP = 0;
//         int pickG = 0;

//         int lastM = 0;
//         int lastP = 0;
//         int lastG = 0;

//         for (int i = 0; i < garbage.size(); i++) {
//             string currentHouseGarbage = garbage[i];
//             for (int j = 0; j < currentHouseGarbage.length(); j++) {
//                 if (currentHouseGarbage[j] == 'M') {
//                     pickM++;
//                     lastM = i;
//                 } else if (currentHouseGarbage[j] == 'P') {
//                     pickP++;
//                     lastP = i;
//                 } else if (currentHouseGarbage[j] == 'G') {
//                     pickG++;
//                     lastG = i;
//                 }
//             }
//         }

//         int travelTimetillLastM = 0, travelTimetillLastP = 0,
//             travelTimetillLastG = 0;
//         for (int i = 0; i < lastM; i++)
//             travelTimetillLastM += travel[i];
//         for (int i = 0; i < lastP; i++)
//             travelTimetillLastP += travel[i];
//         for (int i = 0; i < lastG; i++)
//             travelTimetillLastG += travel[i];

//         int totalTime = (pickM + travelTimetillLastM) +
//                         (pickP + travelTimetillLastP) +
//                         (pickG + travelTimetillLastG);
//         return totalTime;
//     }
// };

// Tc -> O(n*max(length of string ))
//sc -> O(1)