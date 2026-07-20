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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(head ==nullptr || head->next == nullptr) return nullptr;
        
        // ListNode *size = head;
        // int len = 0;
        // while(size!=nullptr){
        //     size = size->next;
        //     len++;
        // }

        // if(len==n) return head->next;
        // ListNode* temp = head;
        // int cnt =0;
        // while(temp!=nullptr){
        //     if(cnt == len-n- 1) {temp->next = temp->next->next;
        //         break;
        //     }

        //     temp = temp->next;
        //     cnt++;
        // }


        // return head;


        ListNode* dummy = new ListNode(0,head);

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        for(int i=0; i<n; i++){
            fast = fast->next;
        }

        while(fast->next !=nullptr){
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* del = slow->next;
        slow->next = del->next;
        delete del;

        return dummy->next;
    }
};