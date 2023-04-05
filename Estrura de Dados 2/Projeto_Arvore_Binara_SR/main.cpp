/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 1 de março de 2023, 09:00
 */

#include <cstdlib>

#include "ArvoreBinaria.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ArvoreBinaria *obj = new ArvoreBinaria;
    obj->Insere(3);  
    obj->Insere(4);
    
    obj->EmORDEM(obj->raiz);
    return 0;
    return 0;
}

