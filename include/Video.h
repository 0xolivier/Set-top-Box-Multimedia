#include "MyClass.h"

using namespace std;


class Video : public MyClass {

protected :
	int duration;

public :
	Video();
	Video(string_view nom, string_view chemin, int durée);
	
	int getdur() const;
	void setdur(int durée);

	void affichagev(ostream& sortie) const;
	
};
