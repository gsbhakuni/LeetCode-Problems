/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void helper(ListNode* head, vector<int>&v){
        if(head == NULL) return;
        v.push_back(head -> val);
        helper(head -> next, v);
    }
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>v;
        vector<int>ans;
        helper(head, v);
        for(int i = 1; i < v.size()-1; i++){
            if(v[i] > v[i-1] and v[i] > v[i+1]) ans.push_back(i);
            if(v[i] < v[i-1] and v[i] < v[i+1]) ans.push_back(i);
        }
        if(ans.size() < 2) return {-1, -1};
        int mini = INT_MAX, maxi = ans[ans.size()-1] - ans[0];
        for(int i = 0; i < ans.size()-1; i++){
            mini = min(mini, ans[i+1] - ans[i]);
        }
        return {mini, maxi};
    }
};