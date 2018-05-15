class LinkedList {
public:
    void addNode(int x) {

    }

    void display(){

    }

    void reverseList(){

    }

    void deleteAll(){

    }
};

int main()

{

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



    ll.addNode(8);

    /// Display  1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> @

    ll.display();



    ll.addNode(1);

    /// Display  2 -> 3 -> 4 -> 5 -> 6 -> 7 -> @

    ll.display();



    ll.addNode(5);

    /// Display  2 -> 3 -> 4 -> 6 -> 7 -> @

    ll.display();

    ll.reverseList();

    /// Display  7 -> 6 -> 4 -> 3 -> 2 -> @

    ll.display();

    ll.deleteAll();



    return 0;

}

