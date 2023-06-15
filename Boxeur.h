#ifndef BOXEUR_H
#define BOXEUR_H

#include <iostream>
#include <string>

namespace box {
    class Boxeur {
        std::string name;
        double poids = 0.0;

    public:
        Boxeur();
        ~Boxeur();

        Boxeur(std::string name, double poids);

        std::string GetName();

        void SetPoids(double poids);

        double GetPoids();
    };
}

#endif
