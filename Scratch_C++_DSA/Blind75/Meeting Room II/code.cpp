#include<bits/stdc++.h>
using namespace std;

    int minMeetingRooms(vector<vector<int>>intervals) {
        if(intervals.empty()) return 0;

        int n = intervals.size();

        priority_queue<int, vector<int>, greater<int>> pq;

        sort(intervals.begin(), intervals.end());

        pq.push(intervals[0][1]);

        for(int i = 1; i < n; i++)
        {
            if(pq.top() <= intervals[i][0])
            {
                pq.pop();
            }
            pq.push(intervals[i][1]);
            
        }

        return pq.size();
    }

int main(){

    vector<vector<int>>intervals = {{0, 40}, {5,10}, {15,40}};
    cout<<minMeetingRooms(intervals);
   return 0;
}