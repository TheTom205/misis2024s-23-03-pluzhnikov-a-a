//
// Created by thetom205 on 3/4/24.
//
#include <QueueLstPr/QueueLstPr.h>
#include <stdexcept>
#include <complex/complex.hpp>

///COPY CONSTRUCTOR
QueueLstPr::QueueLstPr(const QueueLstPr &a) {

}

//////POP FUNCTION
void QueueLstPr::Pop() {
  Node* del=head_;
  head_=head_->next;
  delete head_;
}

///PUSH FUNCTION
void QueueLstPr::Push(Complex &data) {
  Node *new_node = new Node(data);
  new_node->next=head_;
  head_ = new_node;

}

///ISEMPTY FUNCTION
bool QueueLstPr::IsEmpty() {
  return head_==nullptr;
}

///TOP FUNCTION
Complex QueueLstPr::Top(){
  return head_->val;

}