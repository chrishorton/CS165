/// (1)	Change the 3rd statement 
///            int &x2 = x; 
///     to 
///            int &x2; 
///
///     What is the result after you compile?

/// A reference which must be initialized when declared

///
/// (2)	Which statement reassigns the ptr pointer? What happens after the pointer is reassigned?

//

///
/// (3)	Is the first assert() true or false? Why?
///
/// (4)	Is the second assert() true or false? Why?
///
/// (5)	Predict the output of the program (everything displayed on screen) by using the two given address 
///     values, i.e. 0018FD84 and 0018FD78. (Of course the addresses in your system are different from these two. 
///     But let us just assume they are the addresses of x and y.) 

#include <iostream>
#include <assert.h> 
using namespace std;

int main()
{

	int x = 10;   // Let us assume the address of x is 0018FD84
	int y = 1;    // Let us assume the address of y is 0018FD78
	int &x2 = x;  // x2 is a reference which must be initialized when it is declared
	int *ptr = &x; // ptr is a pointer variable
	int *ptr2 = &x2;  // ptr2 is a pointer variable

	cout << "x:         " << x << endl; 
	cout << "addr of x: " << &x << endl;
	cout << "y:         " << y << endl; 
	cout << "addr of y: " << &y << endl;
	cout << "&x2:       " << &x2 << endl;
	cout << "x2:        " << x2 << endl;  // Now you can see that x2 is an alias of x
	cout << "*ptr:      " << *ptr << endl; 
	cout << "ptr:       " << ptr << endl;
	cout << "ptr2:      " << ptr2 << endl;
	assert(ptr == ptr2);  // Is this true or false?

	ptr = &y;  // A pointer can be reassigned
	cout << "after 'ptr = &y;' is executed." << endl;
	cout << "*ptr:      " << *ptr << endl;
	cout << "ptr:       " << ptr << endl;

	assert(ptr == ptr2);  // Is this true or false?
	return 0;
}
