#include "../include/MyClass.h"


MyClass::MyClass ()
{}

MyClass::MyClass(string_view nom, string_view chemin)
: name(nom), pathname(chemin)
{ cout<<" un nouvel objet multimédia a été crée"<<endl; }

MyClass::~MyClass()
{ cout<<"un objet multimedia a été détruit"<<endl; }

string MyClass::getname() const { return name ; }
string MyClass::getpath() const {return pathname ;}

void MyClass::setname( string_view name) { this->name = name ;}
void MyClass::setpath( string_view pathname) {this->pathname = pathname;}

void MyClass::display( ostream& sortie, string_view name, string_view pathname) const {

sortie<<"le nom de ce media est : "<< name<<endl;
sortie<<"le chemin vers ce media est: "<<pathname<<endl;
}
