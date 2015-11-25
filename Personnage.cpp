/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Personnage.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

Personnage::Personnage() : m_vie(100), m_mana(100) {
}

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100),\
        m_mana(100),m_arme(nomArme, degatsArme)
{
 
}

void Personnage::afficherEtat() const
{
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme.afficher();
}

void Personnage::recevoirDegats(int nbDegats) {
    m_vie -= nbDegats;
    if (m_vie < 0) {
        m_vie = 0; 
    }
}

void Personnage::attaquer(Personnage &cible) {
        cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion) {
    m_vie += quantitePotion;
    if (m_vie > 100){
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {
        m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() {
    return m_vie > 0;
}