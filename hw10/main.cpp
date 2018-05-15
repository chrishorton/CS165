#include <iostream>

using namespace std;

struct ListNode
{
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
        /// 2. If the list exists, add the node to the tail.
        ListNode * newNode = new ListNode(x);
        ListNode *p = head;

        if(head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            p = head;
            while(p->next!=nullptr)
                p=p->next;
            p->next=newNode;

        }

    }
    void addNodeToSortedList(int x) {
        /// To do: Add your code here
        /// Add a node to the list
        /// 1. If the list is empty, create the head node.
        /// 2. If the list exists, add the node to the list and the list must be sorted.
        ListNode *temp = new ListNode(x);

        ListNode *p = head;
        ListNode *pp = nullptr;

        if(head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            while(p!=nullptr && p->data < x)
            {
                pp = p;
                p = p->next;
            }
            if(pp == nullptr)
            {
                head = temp;
                temp->next = p;
            }
            else
            {
                pp->next = temp;
                temp->next = p;
            }

        }
    }

    void deleteNode(int toDelete) {
        ListNode *p = head;
        ListNode *pn = nullptr;

        if(p->data == toDelete) {
            p = head->next;
            delete head;
            head = p;
        }

        while(p != nullptr && p->data != toDelete) {
            pn = p;
            p = p->next;
        }

        if(p != nullptr) {
            pn->next = p->next;
            delete p;
        }


    }

    void deleteAll() {
        /// To do: Add your code here
        /// Delete all nodes and free the memory
        ListNode * p = head;
        ListNode * pn = nullptr;

        while(head != nullptr)
        {
            pn = head->next;
            delete head;
            cout << "deleted node\n";
            head=pn;
        }

    }

    void reverseList() {
        ListNode * h = head;
        ListNode * previous = nullptr;
        ListNode * next = nullptr;

        while (h != nullptr) {
            next = h->next;
            h->next = previous;
            previous = h;
            h = next;
        }
        head = previous;
    }

    void display() {
        /// To do: Add your code here
        /// Display all nodes in the sequence from head to tail
        /// Example:
        ///   6 -> 2 -> 28 -> 1 -> @
        ListNode * p = head;
        while(p != nullptr)
        {
            cout << p->data << "->";
            p=p->next;
            if(p==nullptr)
            {
                cout << "@\n\n";
            }
        }


    }
};

int main() {
    LinkedList ll;

    ll.addNode(1);

    ll.addNode(2);

    ll.addNode(3);

    ll.addNode(4);

    ll.addNode(5);

    ll.addNode(6);

    ll.addNode(7);

    ll.addNode(8);



    /// Display  1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> @

    ll.display();



    ll.deleteNode(8);

    /// Display  1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> @

    ll.display();



    ll.deleteNode(1);

    /// Display  2 -> 3 -> 4 -> 5 -> 6 -> 7 -> @

    ll.display();



    ll.deleteNode(5);

    /// Display  2 -> 3 -> 4 -> 6 -> 7 -> @

    ll.display();

    ll.reverseList();

    /// Display  7 -> 6 -> 4 -> 3 -> 2 -> @

    ll.display();

    ll.deleteAll();

    return 0;
}