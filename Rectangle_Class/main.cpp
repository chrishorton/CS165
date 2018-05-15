#include <iostream>
using namespace std;
class  Base
{
protected:
    int baseVar;
public:
    Base(int val = 10)
    {
        baseVar = val;
        cout << "Base constructor: baseVar = " << baseVar << endl;
    }
    int getVar()
    {
        cout << "Base::getVar = " << endl;
        return baseVar;
    }
};

class  Derived: public Base  // Change public to protected or private and see what can happen
{
private:
    int derivedVar;
public:
    Derived(int val = 100)
    {
        derivedVar = val;
        cout << "Derived constructor: derivedVar = " << derivedVar << endl;
    }
    int getVar()
    {
        cout << "Derived::getVar = " << endl;
        return derivedVar;
    }
};

int main()
{

    cout << "\\1\\" << endl;
    Derived derivedObj;
    cout << "\\2\\" << endl;
    cout << derivedObj.getVar()<< endl;
    cout << "\\3\\" << endl;
    Derived *derivedPtr = 0;
    derivedPtr = &derivedObj;
    cout << derivedPtr->getVar() << endl;
    cout << "\\4\\" << endl;
    Base *basePtr = 0;//nullptr;
    basePtr = &derivedObj;
    cout << basePtr->getVar() << endl;

    return 0;
}
