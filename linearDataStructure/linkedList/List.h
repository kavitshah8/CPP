#pragma once
template <typename T>
class List {
    public:
        const T & operator[](unsigned index);
        void insertAtFront(const T & data);
        
    private:
        class ListNode {
            public:
                const T &data;
                ListNode *next;
                ListNode(const T & data): data(data), next(nullptr) { }
        };
    
    ListNode *head_;
};

template <typename T>
const T & List<T>::operator[](unsigned index) {
    ListNode *runner = head_;

    while (index > 0 && runner->next != nullptr) {
        runner = runner->next;
        index--;
    }
    return runner->data;
}

template<typename T>
void List<T>::insertAtFront (const T & data) {
    ListNode *node = new ListNode(data);
    node->next = head_;
    head_ = node;
}
