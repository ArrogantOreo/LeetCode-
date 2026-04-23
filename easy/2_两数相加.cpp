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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* start=new ListNode(0);
        ListNode* l3=new ListNode(0);
        l3->val=0;
        start->next=l3;
        while(l1!=nullptr&&l2!=nullptr){
            ListNode* temp_node=new ListNode();
            int temp_sum=l1->val+l2->val+l3->val;
            int all_sum=0;
            if(temp_sum>=10){
                l3->val=temp_sum%10;
                all_sum=temp_sum/10;
                temp_node->val=all_sum;
            }
            else{
                l3->val=temp_sum;
            }
            l1=l1->next;
            l2=l2->next;
            if(l1==nullptr&&l2==nullptr){
                if(temp_node->val!=0){
                    l3->next=temp_node;
                    l3=temp_node;
                }
            return start->next;
            }
            l3->next=temp_node;
            l3=temp_node;
        }
        if(l1!=nullptr){
            while(l1!=nullptr){
            ListNode* temp_node=new ListNode();
            int temp_sum=l1->val+l3->val;
            int all_sum=0;
            if(temp_sum>=10){
                l3->val=temp_sum%10;
                all_sum=temp_sum/10;
                temp_node->val=all_sum;
            }
            else{
                l3->val=temp_sum;
            }
            l1=l1->next;
            if(l1==nullptr){
                if(temp_node->val!=0){
                    l3->next=temp_node;
                    l3=temp_node;
                }
            return start->next;
            }
            l3->next=temp_node;
            l3=temp_node;
        }
        }
        if(l2!=nullptr){
            while(l2!=nullptr){
            ListNode* temp_node=new ListNode();
            int temp_sum=l2->val+l3->val;
            int all_sum=0;
            if(temp_sum>=10){
                l3->val=temp_sum%10;
                all_sum=temp_sum/10;
                temp_node->val=all_sum;
            }
            else{
                l3->val=temp_sum;
            }
            l2=l2->next;
            if(l2==nullptr){
                if(temp_node->val!=0){
                    l3->next=temp_node;
                    l3=temp_node;
                }
            return start->next;
            }
            l3->next=temp_node;
            l3=temp_node;
        }
        }
        return start->next;
    }
};