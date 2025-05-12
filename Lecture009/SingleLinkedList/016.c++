23. Merge k Sorted Lists


class Solution {
    public:
        // Helper function to merge two sorted linked lists
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            ListNode temp(0);  // Temporary temp node
            ListNode* tail = &temp;
    
            while (l1 && l2) {
                if (l1->val < l2->val) {
                    tail->next = l1;
                    l1 = l1->next;
                } else {
                    tail->next = l2;
                    l2 = l2->next;
                }
                tail = tail->next;
            }
    
            // Attach remaining part (if any)
            if (l1) tail->next = l1;
            else if (l2) tail->next = l2;
    
            return temp.next;
        }
    
        // Main function to merge k lists
        ListNode* mergeKLists(vector<ListNode*>& lists) {
            if (lists.empty()) return nullptr;
    
            ListNode* result = nullptr;
    
            for (int i = 0; i < lists.size(); ++i) {
                result = mergeTwoLists(result, lists[i]);
            }
    
            return result;
        }
    };
    