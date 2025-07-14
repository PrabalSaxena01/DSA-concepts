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
    int getDecimalValue(ListNode* head) {
        vector<int> result;
        auto first = head;
        while (first != NULL) {
            result.insert(result.begin(), first->val);
            first = first->next;
        }
        int ans = 0;
        for (int i = 0; i < result.size(); i++) {
            ans  += result[i]*pow(2,i);
        }
        return ans;
    }
};