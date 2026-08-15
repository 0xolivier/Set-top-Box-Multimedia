#include <string>
#include <iostream>
#include <string_view>

using namespace std;

class MyClass {

protected :

	string name;
	string pathname;
public :

	MyClass();
	MyClass (string_view nom, string_view chemin);
	~MyClass();

	string getname() const;
	string getpath() const;

	void setname(string_view name);
	void setpath(string_view pathname);

	void display(ostream& sortie) const;

};
	
