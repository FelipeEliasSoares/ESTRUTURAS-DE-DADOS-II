/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 1 de março de 2023, 08:24
 */

#include <cstdlib>

#include "cArvore.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

        
    cArvore *obj= new cArvore();
    


        //obj->somar(obj->arvore);
        

        obj->Menu(obj->arvore);
        
        //obj->insere(obj->arvore,5);
        //obj->insere(obj->arvore,3);
        //obj->insere(obj->arvore,8);
        //obj->insere(obj->arvore,4);
    return 0;
}

