#include "../include/MYClass.h"

using namespace std;

class Photo : public MyClass {

protected : 
	double latitude;
	double longitude;
public :
	Photo()
	{}
	Photo(string_view nom, string_view chemin, double latitude, double  longitude)
	:MyClass(nom, chemin), latitude(latitude), longitude(longitude)
	{cout<<"ce média est une photo"<<endl;}

	double getlat() const{ return latitude;}
	double getlon() const{ return longitude;}

	void setlat(double lat) {latitude = lat ;}
	void setlon(double lon) {longitude = lon;}

	void displayp(ostream& sortie){
	display(sortie);
	sortie<<"la latitude de la photo est : "<<getlat()<<endl;
	sortie<<"la longitude de la photo est : "<<getlon()<<endl;
	}
