/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arme.h
 * Author: Maison
 *
 * Created on 25 novembre 2015, 10:35
 */
#include <cstdlib>
#include <string>

#ifndef ARME_H
#define ARME_H

class Arme
{
    public:
 
    Arme();
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
    int getDegats() const;
    private:
 
    std::string m_nom;
    int m_degats;
};

#endif /* ARME_H */

