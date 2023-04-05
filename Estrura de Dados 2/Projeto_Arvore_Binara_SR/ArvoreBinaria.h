/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   ArvoreBinaria.h
 * Author: aluno
 *
 * Created on 1 de março de 2023, 09:00
 */

#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

#include "no.h"

class ArvoreBinaria {
public:
   ArvoreBinaria();
    ArvoreBinaria(const ArvoreBinaria& orig);
    virtual ~ArvoreBinaria();
    
    no *raiz;
    
    void Insere(int valor);
    
    bool Vazio();
    
    void EmORDEM(no* raiz);
private:

};

#endif /* ARVOREBINARIA_H */

