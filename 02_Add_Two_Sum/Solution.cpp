#include <vector>
#include <stdio.h>
#include <iostream>
#include <unordered_map>
using namespace std;

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
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *head = nullptr;
        ListNode *tail = nullptr;
        while(l1 || l2) {
            int n1 = l1? l1->val: 0;
            int n2 = l2? l2->val: 0;
            int sum = n1 + n2 + carry;
            if(!head) {
                head = new ListNode((sum % 10));
                tail = head;
            } else {
                tail->next = new ListNode((sum % 10));
                tail = tail->next;
            }
            
            carry = sum / 10;

            if(l1) {
                l1 = l1->next;
            }
        
            if(l2) {
                l2 = l2->next;
            }
        }

        if(carry > 0) {
            tail->next = new ListNode(carry);
            tail = tail->next;
        }

        return &(*head);

    }
};

int main(int argc, char* argv[])
{

    
    Solution py_solution;


}