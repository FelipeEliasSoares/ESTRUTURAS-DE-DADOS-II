/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cArvore.h
 * Author: aluno
 *
 * Created on 1 de março de 2023, 08:24
 */

#ifndef CARVORE_H
#define CARVORE_H

#include "no.h"
class cArvore {
public:
    cArvore();
    cArvore(const cArvore& orig);
    virtual ~cArvore();
    
    no *arvore;

    no* insere(no *arvore,int valor);
    
    void EmORDEM(no *arvore);
    //void lerDado();
    
    void PreORDEM(no *arvore);
    
    void PosORDEM(no *arvore);
    
    void Menu(no *arvore);
    
    int somar(no *arvore);
    
    void valor_maior(no *arvore);
    
    int valor_maior_int(no *arvore);
    
    int buscarINT(no * arvore,int valor);
    
    no* buscarEND(no * arvore,int valor);
    
    int nivelElemento(no * arvore,int valor,int nivel);
    
    no* remover3 (no *arvore, int valorRem);
private:

};

#endif /* CARVORE_H */

