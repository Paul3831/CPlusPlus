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
        std::cout << "Destructeur de Boxeur : " << nom << std::endl;
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
    // Instanciation d'un objet Boxeur
    Boxeur boxeur("Box_1", 75.0);

    // Affichage du nom et du poids du boxeur
    std::cout << "Nom du boxeur : " << boxeur.getNom() << std::endl;
    std::cout << "Poids du boxeur : " << boxeur.getPoids() << " kg" << std::endl;

    // Modification du poids du boxeur
    boxeur.setPoids(80.0);
    std::cout << "Nouveau poids du boxeur : " << boxeur.getPoids() << " kg" << std::endl;

    return 0;
}