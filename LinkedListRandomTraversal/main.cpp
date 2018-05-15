#include <iostream>

using namespace std;

struct listNode {
        char data;
        listNode *arr[3];
        listNode (char x) {
              data = x;
              arr[0] = nullptr;
              arr[1] = nullptr;
              arr[2] = nullptr;
       };
};

int main() {
    listNode ln1 = listNode('l');
    listNode ln2 = listNode('i');
    listNode ln3 = listNode('v');
    listNode ln4 = listNode('e');

    ln1.arr[0] = &ln2;
    ln1.arr[1] = &ln3;
    ln1.arr[2] = &ln4;

    ln2.arr[0] = &ln1;
    ln2.arr[1] = &ln3;
    ln2.arr[2] = &ln4;

    ln3.arr[0] = &ln2;
    ln3.arr[1] = &ln1;
    ln3.arr[2] = &ln4;

    ln4.arr[0] = &ln2;
    ln4.arr[1] = &ln3;
    ln4.arr[2] = &ln1;

    srand(time(0));

    // Initialize pointer to first link
    listNode * currPTR = &ln1;

    cout << "Characters the robot has stepped on: ";

    for (int i = 0; i < 10; ++i) {
        int randomNum = rand() % 3;
        cout << currPTR->data;
        currPTR = currPTR->arr[randomNum];
    }

    return 0;
}