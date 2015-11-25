/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arme.cpp
 * Author: Maison
 * 
 * Created on 25 novembre 2015, 10:35
 */

#include "Arme.h"
#include <iostream>
#include <string>
using namespace std;

Arme::Arme() : m_nom("Epee rouillee"), m_degats(10)
{
 
}
 
Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats)
{
 
}

int Arme::getDegats() const {
    return m_degats;
}

void Arme::changer(string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}
 
void Arme::afficher() const
{
    cout << "Arme : " << m_nom << " (Degats : " << m_degats << ")" << endl;
}

