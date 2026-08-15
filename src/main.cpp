#include "../include/MyClass.h"
#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{


MyClass* Test1 = new MyClass;
MyClass* Test2 = new MyClass("Olivier", "C:/mesfichiers/photos");

Test1->display(cout);
Test2->display(cout);
 std::cout << "you are brave ! " << std::endl;

delete Test1;
delete Test2;

    return 0;
}
