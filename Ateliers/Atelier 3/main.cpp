#include <iostream>
using namespace std;
class Voiture{
private:
    std::string marque;
    std::string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:

Voiture(): marque("Inconnu"), modele("Inconnu"), annee(2024), kilometrage(0.0), vitesse(0.0){}

Voiture(const std::string &marque,const std::string &modele, int annee, float kilometrage, float vitesse) : marque(marque),modele(modele), annee(annee), kilometrage(kilometrage), vitesse(vitesse){}

void accelerer(float valeur){
    if(valeur>0){
        vitesse+=valeur;
        cout<<"\nLa voiture accelere , Nouvelle vitesse : " << vitesse << " km/h"<<endl;
    }
}
void freiner(float valeur){
    if(valeur>0){
        if(vitesse-valeur<0)
            vitesse=0;
        else{
            vitesse-=valeur;
        }
         cout<<"\nLa voiture freine , Nouvelle vitesse : " << vitesse << " km/h"<<endl;
    }
}
void afficherinfo(){
    cout << "\n--- Informations sur la voiture : ---" << endl;
    cout << "Marque : " << marque << endl;
    cout << "Modele : " << modele << endl;
    cout << "Annee : " << annee << endl;
    cout << "Kilometrage : " << kilometrage << " km" << endl;
    cout << "Vitesse actuelle : " << vitesse << " km/h" << endl;
}
void avancer(float distance){
    if (distance > 0) {
            kilometrage += distance;
            cout<<"\nLa voiture avance, nouveau kilometrage : "<<kilometrage<<" km"<<endl;
    }
}
~Voiture(){
    cout << "\nLa voiture " << marque << " / " << modele << " est detruite." <<endl;
}
};
int main()
{
    Voiture v1;
    cout << "------   Creation d'une voiture par defaut :   ------" <<endl;
    v1.afficherinfo();
    cout << "\n------   Creation d'une voiture :   ------" <<endl;
    Voiture v2("Dacia","Logan",2007,10500,0.0);
    v2.afficherinfo();
    cout << "\n------   Tester la methode accelerer (+80km/h) :   ------" <<endl;
    v2.accelerer(80);
    cout << "\n------   Tester la methode freiner (-20km/h) :   ------" <<endl;
    v2.freiner(20);
    cout << "\n------   Tester la methode avancer (500km) :   ------" <<endl;
    v2.avancer(500);
    cout << "\n------   Afficher les nouvelles informations :   ------" <<endl;
    v2.afficherinfo();
    return 0;
}
