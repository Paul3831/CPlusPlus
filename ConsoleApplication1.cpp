#include <iostream>
#include <string>

class Boxeur {
private:
    std::string nom;
    double poids;

public:
    Boxeur(std::string nom, double poids) : nom(nom), poids(poids) {
        std::cout << "Constructeur de Boxeur : " << nom << std::endl;
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

int main() {
    // Instanciation automatique d'un objet Boxeur
    Boxeur boxeur_1("Box_1", 75.0);

    // Affichage des informations du boxeur_1
    std::cout << "Adresse de boxeur_1 : " << &boxeur_1 << std::endl;
    std::cout << "Nom de boxeur_1 : " << boxeur_1.getNom() << std::endl;
    std::cout << "Poids de boxeur_1 : " << boxeur_1.getPoids() << " kg" << std::endl;

    // Instanciation dynamique d'un objet Boxeur
    Boxeur* boxeur_2 = new Boxeur("Box_2", 78.0);

    // Affichage des informations du boxeur_2
    std::cout << "Adresse de boxeur_2 : " << boxeur_2 << std::endl;
    std::cout << "Nom de boxeur_2 : " << boxeur_2->getNom() << std::endl;
    std::cout << "Poids de boxeur_2 : " << boxeur_2->getPoids() << " kg" << std::endl;

    // Modification du poids du boxeur_2
    boxeur_2->setPoids(80.0);
    std::cout << "Nouveau poids de boxeur_2 : " << boxeur_2->getPoids() << " kg" << std::endl;

    // Libération de la mémoire du boxeur_2 (car instanciation dynamique)
    delete boxeur_2;

    return 0;
}
