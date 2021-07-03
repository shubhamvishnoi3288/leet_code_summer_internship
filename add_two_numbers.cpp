class Solution {
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
ListNode* move1 = l1->next;
ListNode* move2 = l2->next;
ListNode* res = new ListNode((l1->val + l2->val) % 10);
ListNode* moveres = res;
int carry = (l1->val + l2->val) / 10;
while(move1 && move2){
moveres->next = new ListNode((move1->val + move2->val + carry)%10);
carry = (move1->val + move2->val + carry) / 10;
move1 = move1->next;
move2 = move2->next;
moveres = moveres->next;
}
while(move1){
moveres->next = new ListNode((move1->val + carry)%10);
carry = (move1->val + carry) / 10;
move1 = move1->next;
moveres = moveres->next;
}
while(move2){
moveres->next = new ListNode((move2->val + carry)%10);
carry = (move2->val + carry) / 10;
move2 = move2->next;
moveres = moveres->next;
}
if(carry){
moveres->next = new ListNode(carry);
}
return res;
}
};