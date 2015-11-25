/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Zfraction.h
 * Author: Maison
 *
 * Created on 25 novembre 2015, 14:28
 */
#include <iostream>
#ifndef ZFRACTION_H
#define ZFRACTION_H

class Zfraction {
public:
    Zfraction();
    Zfraction(int num, int den);
    Zfraction(int num);
    Zfraction(const Zfraction& orig);
    Zfraction& operator+=(Zfraction const& frac);
    void afficherFrac(std::ostream &flux) const;
    virtual ~Zfraction();
private:
    int m_num;
    int m_den;
};

#endif /* ZFRACTION_H */

