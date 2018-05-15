/// Implement functions to do the following tasks.
///
/// #1, Sort the list in O(n * n) time.
/// #2, Remove the duplicates from the list and display the result again.
/// #3, Redo #1 by sorting the list in O(n log n) time.


#include <iostream>

using namespace std;

struct ListNode {
    char data;
    ListNode *right;
    ListNode *left;
    ListNode *across;
    
    ListNode(char x) : data(x), right(NULL), left(NULL), across(NULL) {}
};

int main()
{
    ListNode head('E');
    ListNode ln2('V');
    ListNode ln3('I');
    ListNode tail('L');

    head.right = &ln2;
    ln2.right = &ln3;
    ln3.right = &tail;

    head.across = &tail;
    ln2.across = &ln3;
    ln3.across = &ln2;
    tail.across = &head;

    tail.left = &ln3;
    ln3.left = &ln2;
    ln2.left = &head;

    // Set pointer p to location of head of list
    ListNode * p = &head;
    /// Display the data in the list
    while (p != NULL)
    {
        cout << (*p).data;
        p = (*p).right;
        if (p == NULL)
        {
            cout << "";
        }
    }



    // Print random sequence of letters using random number generator from head
    p = &head;
    srand(time(0));
    while(p!=NULL){

        cout << p -> data;
        int rand = random() % 2;
        cout << rand;









    }














    // Send pointer p to end of list
    p = &tail;
    cout << endl;

    // Traverse the list backwards
    while (p!=NULL){
        cout << p->data;
        p = p->left;
        if (p==NULL){
            cout << "";
        }
    }

    /// Sort the list in O(n * n) time
    /// In the code you are supposed to use only head. Other nodes, such as ln2, ln3 .... are NOT allowed to be used.

    /// Remove the duplicates from the list, and display it again.
    /// The output should be  0->2->8->18->97

    /// Redo #1 by sorting the list in O(n log n) time.


    return 0;
}
