#define BOXEUR_H

#include <string>

class Boxeur {
private:
    std::string nom;
    double poids;

public:
    Boxeur(const std::string& nom, double poids);
    ~Boxeur();

    std::string GetNom() const;
    double GetPoids() const;
    void SetPoids(double poids);
};


