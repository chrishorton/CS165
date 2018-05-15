#include <iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode *next;

    ListNode(int x) : data(x), next(nullptr) {}
};

class LinkedList {
    private:
        ListNode *head = nullptr;
        ListNode *tail = nullptr;

    public:
        void addNode(int x) {
            /// To do: Add your code here
            /// Add a node to the list
            /// 1. If the list is empty, create the head node.
            /// 2. If the list exists, add the node to the tail
            ListNode * temp = new ListNode(x);
            if (head == nullptr) {
                head = temp;
                tail = temp;
            } else  {
                tail->next = temp;
                tail = tail->next;
            }
        }

        void addNodeToSortedList(int x) {
            /// To do: Add your code here
            /// Add a node to the list
            /// 1. If the list is empty, create the head node.
            /// 2. If the list exists, add the node to the right spot.
            ListNode *temp = new ListNode(x);

            ListNode *p = head;
            ListNode *pp = nullptr;

            if(head == nullptr) {
                head = temp;
                tail = temp;
            } else {
                while(p!=nullptr && p->data < x) {
                    pp = p;
                    p = p->next;
                } if (pp == nullptr) {
                    head = temp;
                    temp->next = p;
                } else {
                    pp->next = temp;
                    temp->next = p;
                }
            }
        }

        void deleteAll() {
            /// To do: Add your code here
            /// Delete all nodes and free the memory
            ListNode * temp = nullptr;

            while(head != nullptr) {
                temp = head->next;
                delete head;
                head=temp;
            }

        }

        void display() {
            /// To do: Add your code here
            /// Display all nodes in the sequence from head to tail
            /// Example:
            ///   6 -> 2 -> 28 -> 1 -> @
            ListNode *p = head;
            while (p!= nullptr){
                cout << p->data << "->";
                p = p->next;
                if (p == nullptr) {
                    cout << "@";
                }
            }
            cout << endl;
        }
};

int main() {
    LinkedList ll;

    ll.addNode(6);

    ll.addNode(2);

    ll.addNode(28);

    ll.addNode(1);

    /// Display  6 -> 2 -> 28 -> 1 -> @

    ll.display();

    ll.deleteAll();

    ll.addNodeToSortedList(6);

    ll.addNodeToSortedList(2);

    ll.addNodeToSortedList(28);

    ll.addNodeToSortedList(1);

    /// Display  1 -> 2 -> 6 ->28 -> @

    ll.display();

    ll.deleteAll();

    return 0;
}

