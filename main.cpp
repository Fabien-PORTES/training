/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: fabien
 *
 * Created on 24 novembre 2015, 16:08
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include "Personnage.h"
#include "Zfraction.h"
using namespace std;

/*
 * 
 */
void aff_personnage() {
    //Création des personnages
    Personnage david, goliath("Épée aiguisée", 20);
 
    //Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);
 
    //Temps mort ! Voyons voir la vie de chacun…
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat(); 
}

Zfraction operator+(Zfraction const& a, Zfraction const&b) {
    Zfraction copie(a);
    copie += b;
    return copie;
}

ostream& operator<<(ostream& flux, Zfraction const& frac) {
    frac.afficherFrac(flux);
    return flux;
}

int main(int argc, char** argv) {
    Zfraction a(4,5), b(2,1);
    Zfraction c(0,1),d;
    c.afficherFrac(cout);
    b.afficherFrac(cout);
    c = a + b;
    a.afficherFrac(cout);
    
    
    cout << a << "+" << b << "=" << c << endl;
    c.afficherFrac(cout);
    a.afficherFrac(cout);
    return 0;
}

