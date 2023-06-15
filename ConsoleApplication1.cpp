#include <iostream>
#include <string>

class Boxeur {
private:
    std::string nom;
    double poids;

public:
    Boxeur(std::string nom, double poids) : nom(nom), poids(poids) {

    }

    ~Boxeur() {

    }

    std::string getNom() const {
        return nom;
    }

    double getPoids() const {
        return poids;
    }

    void setPoids(double poids) {
        this->poids = poids;
    }
};

class Combat {
private:
    std::string niveau;
    Boxeur* coinBleu;
    Boxeur* coinRouge;
    Boxeur* vainqueur;

public:
    Combat(std::string niveau) : niveau(niveau), coinBleu(nullptr), coinRouge(nullptr) {

    }

    ~Combat() {
       
    }

    std::string getNiveau() const {
        return niveau;
    }

    void setCoinBleu(Boxeur* boxeur) {
        coinBleu = boxeur;
    }

    Boxeur* getCoinBleu() const {
        return coinBleu;
    }

    void setCoinRouge(Boxeur* boxeur) {
        coinRouge = boxeur;
    }

    Boxeur* getCoinRouge() const {
        return coinRouge;
    }

    Boxeur* designerVainqueur(std::string couleurCoin) {
        if (couleurCoin == "rouge") {
            this->vainqueur = coinRouge;
        }
        else if (couleurCoin == "bleu") {
            this->vainqueur = coinBleu;
        }
        else {
            this->vainqueur = nullptr;
        }

        return this->vainqueur;
    }
};

int main() {
    // Instanciation automatique d'un objet Boxeur
    Boxeur boxeur_1("Box_1", 75.0);
    std::cout << "Boxeur 1 : " << &boxeur_1 << std::endl;
    // Instanciation dynamique d'un objet Boxeur
    Boxeur* boxeur_2 = new Boxeur("Box_2", 78.0); 
    std::cout << "Boxeur 2 : " << boxeur_2 << std::endl;

    // Instanciation d'un objet Combat
    Combat combat_1("Comb_1_1/8");

    // Association entre combat_1 et boxeur_1
    combat_1.setCoinBleu(&boxeur_1);

    // Association entre combat_1 et boxeur_2
    combat_1.setCoinRouge(boxeur_2);

    // Vérification des associations
    std::cout << "Boxeur du coin bleu : " << combat_1.getCoinBleu() << std::endl;
    std::cout << "Boxeur du coin rouge : " << combat_1.getCoinRouge() << std::endl;

    Boxeur* Vainqueur = combat_1.designerVainqueur("bleu");
    std::cout << "Boxeur gagnant :  " << Vainqueur << std::endl;

    // Libération de la mémoire du boxeur_2 (car instanciation dynamique)
    delete boxeur_2;


    return 0;
}
