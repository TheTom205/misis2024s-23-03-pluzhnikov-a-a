//
// Created by thetom205 on 2/18/24.
//
#include <StackLst/StackLst.h>
#include <stdexcept>
#include <complex/complex.hpp>

///COPY CONSTRUCTOR
StackLst::StackLst(const StackLst &a) {

}

//////POP FUNCTION
void StackLst::Pop() {
  Node* del=head_;
  head_=head_->next;
  delete head_;
}

///PUSH FUNCTION
void StackLst::Push(Complex &data) {
  Node *new_node = new Node(data);
  new_node->next=head_;
  head_ = new_node;

}

///ISEMPTY FUNCTION
bool StackLst::IsEmpty() {
  return head_==nullptr;
}

///TOP FUNCTION
Complex StackLst::Top(){
  return head_->val;

}