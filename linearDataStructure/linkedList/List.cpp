#include <iostream>

#include "List.h"

template <class T>
const T & List<T>::operator[](unsigned index) {
    ListNode *runner = head_;

    while (index > 0 && runner->next != nullptr) {
        runner = runner->next;
        index--;
    }
    return runner->data;
}

template<class T>
void List<T>::insertAtFront (const T & data) {
    ListNode *node = new ListNode(data);
    node->next = head_;
    head_ = node;
}
 