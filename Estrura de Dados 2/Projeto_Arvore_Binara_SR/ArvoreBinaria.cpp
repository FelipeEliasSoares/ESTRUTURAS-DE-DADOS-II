/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   ArvoreBinaria.cpp
 * Author: aluno
 * 
 * Created on 1 de março de 2023, 09:00
 */

#include "ArvoreBinaria.h"

#include <cstdlib>
#include "no.h"

#include <iostream>

using namespace std;
ArvoreBinaria::ArvoreBinaria() {
}

ArvoreBinaria::ArvoreBinaria(const ArvoreBinaria& orig) {
}

ArvoreBinaria::~ArvoreBinaria() {
}


void ArvoreBinaria :: Insere(int valor){
    no *tmp=this->raiz;
    no *ant= NULL;
    while(tmp !=NULL){
        ant = tmp;
        if(tmp->valor < valor){
            tmp = tmp->direito;
        }
        else{
            tmp= tmp->esquerdo;
        }
    }
    
    if(this->Vazio()){
        this->raiz= new no(valor);
    }
    else if(ant->valor < valor){
        ant->direito = new no(valor);
    }
    else{
        ant->esquerdo = new no(valor);
    }

}


bool ArvoreBinaria :: Vazio(){
    return this->raiz == NULL;
}

void ArvoreBinaria :: EmORDEM(no* raiz){
    if(raiz !=NULL){
        EmORDEM(raiz->esquerdo);
        cout<<raiz->valor<< " ";
        EmORDEM(raiz->direito);
    }
}