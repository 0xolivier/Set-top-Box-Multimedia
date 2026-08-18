#include "../include/Video.h"

using namespace std;

	Video::Video()
	{}

	Video::Video(string_view nom, string_view chemin, int durée)
	:MyClass(nom, chemin), duration(durée)
	{
	cout<<"il s'agit d'une vidéo"<<endl;
	}

	int Video::getdur() const{return duration ;}

	void Video::setdur(int durée){ duration=durée ;}

	void Video::affichagev (ostream& sortie) const{
	display(sortie);
	sortie<<"la durée de la vidéo est : "<<getdur()<<endl;
	}


