#pragma once
template <typename T>
class List {
    private:
        const T & operator[](unsigned index);
        void insertAtFront(const T & data);
    
    public:
        class ListNode {
            public:
                const T &data;
                ListNode *next;
                ListNode(T &data): data(data), next(nullptr) {};
        };
    
    ListNode *head_;
};

template <typename T>
const T & List<T>::operator[](unsigned index) {
    List::ListNode *runner = _head;

    while(index > 0 && runner->next != nullptr) {
        runner = runner -> next;
        index--;
    }
    return runner->data;
}
