/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Zfraction.cpp
 * Author: Maison
 * 
 * Created on 25 novembre 2015, 14:28
 */
#include <iostream>
#include "Zfraction.h"
using namespace std;
Zfraction::Zfraction() : m_num(0), m_den(1){
}
Zfraction::Zfraction(int num, int den) : m_num(num), m_den(den){
}
Zfraction::Zfraction(int num) : m_num(num), m_den(0){
}
Zfraction& Zfraction::operator+=(Zfraction const& frac) {
    m_num = (frac.m_num * m_den) + (m_num * frac.m_den);
    m_den = frac.m_den * m_den;
    return *this;
}
Zfraction& Zfraction::operator*=(Zfraction const& frac){
    m_num *= frac.m_num;
    m_den *= frac.m_den ;
    return *this;
 }

 bool Zfraction::estEgal(Zfraction const &frac) const {
     return ((m_num == frac.m_num) && (m_den == frac.m_den));
 }

void Zfraction::afficherFrac(ostream& flux) const{
    flux << m_num << "/" << m_den << " ";
}

Zfraction::Zfraction(const Zfraction& orig) {
    m_den = orig.m_den;
    m_num = orig.m_num;
}

Zfraction::~Zfraction() {
}

