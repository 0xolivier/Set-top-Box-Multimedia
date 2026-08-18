#include "MyClass.h"

using namespace std;

class Photo : public MyClass {

protected :
        double latitude;
        double longitude;
public :
        Photo();
        Photo(string_view nom, string_view chemin, double latitude, double  longitude);
        double getlat() const;
        double getlon() const;

        void setlat(double lat);
        void setlon(double lon);

        void displayp(ostream& sortie);
	void play() const;
};
