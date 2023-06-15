#ifndef COMBAT_H
#define COMBAT_H

#include <string>
#include "Boxeur.h"
#include <iostream>

namespace box {
    class Combat {
        std::string niveau;
        Boxeur* coinBleu;
        Boxeur* coinRouge;
        Boxeur* vainqueur;

    public:
        Combat(std::string niveau);
        ~Combat();

        std::string GetNiveau();
        Boxeur* GetCoinBleu();
        Boxeur* GetCoinRouge();
        void SetCoinBleu(Boxeur* boxeur);
        void SetCoinRouge(Boxeur* boxeur);
        Boxeur* DesignerVainqueur(std::string coinGagnant);
        Boxeur* GetVainqueur();
    };
}

#endif // COMBAT_H
