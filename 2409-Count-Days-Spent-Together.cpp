class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int>d = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        string arrive_date = max(arriveAlice, arriveBob);
        string leave_date = min(leaveAlice, leaveBob);
        int arrive_month = stoi(arrive_date.substr(0, 2));
        int leave_month = stoi(leave_date.substr(0, 2));
        int arrive_day = stoi(arrive_date.substr(3, 2));
        int leave_day = stoi(leave_date.substr(3, 2));
        int ans = 0;
        if(arrive_month > leave_month || (arrive_month == leave_month and arrive_day > leave_day)) return 0;
        for(int i = arrive_month; i < leave_month; i++){
            ans += d[i];
        }

        ans += leave_day - arrive_day+1;
        return ans;
    }
};