/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   no.cpp
 * Author: aluno
 * 
 * Created on 1 de março de 2023, 09:00
 */

#include "no.h"
#include <cstdlib>
no::no() {
    this->direito= this->esquerdo= NULL;
}

no::no(int valor) {
    this->valor = valor;
    this->direito=this->esquerdo=NULL;
}

no::~no() {
}
