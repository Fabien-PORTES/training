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
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

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
 
    return 0;
}

