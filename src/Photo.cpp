#include "../include/Photo.h"

using namespace std;

	Photo::Photo()
	{}
	Photo::Photo(string_view nom, string_view chemin, double latitude, double  longitude)
	:MyClass(nom, chemin), latitude(latitude), longitude(longitude)
	{cout<<"ce média est une photo"<<endl;}

	double Photo::getlat() const{ return latitude;}
	double Photo::getlon() const{ return longitude;}

	void Photo::setlat(double lat) {latitude = lat ;}
	void Photo::setlon(double lon) {longitude = lon;}

	void Photo::displayp(ostream& sortie){
	display(sortie);
	sortie<<"la latitude de la photo est : "<<getlat()<<endl;
	sortie<<"la longitude de la photo est : "<<getlon()<<endl;
	}
