//
// Created by thetom205 on 2/19/24.
//
#include <QueueLst/QueueLst.h>
#include <stdexcept>
#include <complex/complex.hpp>

///COPY CONSTRUCTOR
QueueLst::QueueLst(const QueueLst &a) {

}

//////POP FUNCTION
void QueueLst::Pop() {
  Node* del=head_;
  head_=head_->next;
  delete head_;
}

///PUSH FUNCTION
void QueueLst::Push(Complex &data) {
  Node *new_node = new Node(data);
  new_node->next=head_;
  head_ = new_node;

}

///ISEMPTY FUNCTION
bool QueueLst::IsEmpty() {
  return head_==nullptr;
}

///TOP FUNCTION
Complex QueueLst::Top(){
  return head_->val;

}