/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Personnage.h
 * Author: fabien
 *
 * Created on 24 novembre 2015, 16:27
 */
#include <cstdlib>
#include <string>
#include "Arme.h"
#ifndef PERSONNAGE_H
#define PERSONNAGE_H

class Personnage
{
    public:
    
    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void afficherEtat() const;

    private:

    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif /* PERSONNAGE_H */

