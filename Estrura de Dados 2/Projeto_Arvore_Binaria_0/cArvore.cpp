/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cArvore.cpp
 * Author: aluno
 * 
 * Created on 1 de março de 2023, 08:25
 */

#include "cArvore.h"
#include <iostream>

#include "cArvore.h"
#include "no.h"

using namespace std;

cArvore::cArvore() {
}

cArvore::cArvore(const cArvore& orig) {
}

cArvore::~cArvore() {
}



no* cArvore ::insere(no* arvore, int valor){
    //int valor;
    
    //cout<<"Digite o valor : ";
//    /cin>>valor;
    
    if(arvore == NULL){
        arvore= new no;
        arvore->direito=NULL;
        arvore->esquerdo=NULL;
        arvore->valor=valor;
    }else if(valor < arvore->valor){
        arvore->esquerdo=insere(arvore->esquerdo,valor);
    }
    else{
        arvore->direito=insere(arvore->direito,valor);
    }
 
    return (arvore);
}


void cArvore :: EmORDEM(no* raiz){
    if(raiz !=NULL){
        EmORDEM(raiz->esquerdo);
        cout<<raiz->valor<< " ";
        EmORDEM(raiz->direito);
    }
}

void cArvore :: PreORDEM(no* raiz){
    if(raiz !=NULL){
        cout<<raiz->valor << " ";
        PreORDEM(raiz->esquerdo);
        PreORDEM(raiz->direito);
    }
}

void cArvore :: PosORDEM(no* raiz){
    if(raiz !=NULL){
        this->PosORDEM(raiz->esquerdo);
        this->PosORDEM(raiz->direito);
        cout<<raiz->valor<<" ";
        
    }
}

void cArvore :: Menu(no *raiz){
    int opc,num, valor;
    while(opc !=0){
        switch(opc){
            case 1:
                cout<< "Digite um numero: "<<endl;
                cin>>num;
                cout<<endl;
                raiz = this->insere(raiz,num);
                
                //this->insere(raiz,5);
                //this->insere(raiz,3);
                //this->insere(raiz,4);
                //his->insere(raiz,8);
                
            break;
            case 2:
                this->PreORDEM(raiz);
            break;
            case 3:
                this->EmORDEM(raiz);
            break;
            case 4: 
                this->PosORDEM(raiz);
            break;
            case 5:
                cout<< "Soma:" <<this->somar(raiz);
            break;
            case 6:
                this->valor_maior(raiz);
            break;
            case 7:
                cout<<"Digite o valor para ser buscado: ";
                cin>>valor;
                //if(buscarINT(raiz,valor)==0){
                    //cout<<"O elemento buscado não foi inserido"<<endl;
                //}else{
                    //cout<<this->buscarINT(raiz,valor)<< " esta inserido";
                    //cout<<endl;
                //}
                
                if(buscarEND(raiz,valor)==NULL){
                    cout<<"O elemento buscado não foi inserido"<<endl;
                }else{
                    cout<<this->buscarEND(raiz,valor)->valor<< " e seu nivel é  " << this->nivelElemento(raiz,valor,0)<<endl;
                    
                    if(this->buscarEND(raiz,valor)->esquerdo ==NULL){
                        cout<<"Esse elemento não tem um filho a esquerda"<<endl;
                    }else{
                        cout<<"O filho a sua esquerda é " << this->buscarEND(raiz,valor)->esquerdo->valor<<endl;
                    }

                    if(this->buscarEND(raiz,valor)->direito ==NULL){
                        cout<<"Esse elemento não tem um filho a direita"<<endl;
                    }else{
                        cout<<"O filho a sua direita é " << this->buscarEND(raiz,valor)->direito->valor<<endl;
                    }
                    
                    //this->EmORDEM(this->buscarEND(raiz->direito,valor));
                    //this->EmORDEM(this->buscarEND(raiz->esquerdo,valor));
                }
            break;
            
                
        }
        cout<<endl;
        cout<<endl;
        cout<<"Digite 1 para Inserir\nDigite 2 para PreOrdem\nDigite 3 para EmORDEM\nDigite 4 para PosOrdem\nDigite 5 para Somar\nDigite 6 para Monstrar o maior numero\nDigite 7 para Buscar um Valor\n0 sair"<< endl;
        cin>>opc;
    }

}

int cArvore :: somar(no* raiz){
    static int total=0;
    if(raiz !=NULL){
        //cout<<total;
        total+= raiz->valor;
        this->somar(raiz->esquerdo);
        this->somar(raiz->direito);
    }
    else{
        total=0;
    }
    
    return total;

}



//int cArvore :: somar(no* raiz){
    //int total=0;
    //if(raiz !=NULL){
        //cout<<total;
        //total= raiz->valor +this->somar(raiz->esquerdo) + this->somar(raiz->direito); 
    //}
    //else{
        //total=0;
    //}
    
    //return total;

//}

void  cArvore :: valor_maior(no* arvore){
  
    if(arvore->direito !=NULL){
       
        this->valor_maior(arvore->direito);
            
    }
    else
        cout<< "O maior numero é " << arvore->valor;

}


//int cArvore :: valor_maior_int(no* arvore){
    //static int valor;
    //if(arvore->direito !=NULL){
        //if(arvore->valor > valor){
            //valor= arvore->valor;
        //}          
    //}
   //else{
            //this->valor_maior(arvore->direito);
        //}
    //return valor;

//}


int cArvore :: buscarINT(no* arvore, int valor){
    if(arvore != NULL){
        if(arvore->valor==valor){
            return arvore->valor;
        }else{
            if(arvore->valor > valor){
                buscarINT(arvore->esquerdo, valor);
            }else{
                buscarINT(arvore->direito,valor);
            }
        
        }
    }else{
        return 0;
    }
}


no* cArvore :: buscarEND(no* arvore, int valor){
    if(arvore != NULL){
        if(arvore->valor==valor){
            return arvore;
        }else{
            if(arvore->valor > valor){
                buscarEND(arvore->esquerdo, valor);
            }else{
                buscarEND(arvore->direito,valor);
            }
        
        }
    }else{
        return NULL;
    }
}

int cArvore :: nivelElemento(no* arvore, int valor,int nivel){
    if(!arvore)
        return -1;
    else{
        if(valor == arvore->valor)
            return nivel;
        else{
            nivel ++;
            
            if(valor < arvore->valor)
                nivel= nivelElemento(arvore->esquerdo,valor,nivel);
            else if(valor > arvore->valor)
                nivel= nivelElemento(arvore->direito,valor,nivel);
        }
        
        return nivel;
    }   
}


no* cArvore::remover3 (no *arvore, int valorRem){
    
if(arvore == NULL)  
      return NULL;  
else    
    if (arvore->valor > valorRem)
            arvore->esquerdo = remover3(arvore->esquerdo, valorRem);
        else if (arvore->valor < valorRem)
           arvore->direito = remover3(arvore->direito, valorRem);
        else { 
        /* Situação 1: O nó não possui filhos = FOLHA */
           if ((arvore->esquerdo == NULL) && (arvore->direito == NULL)) {
              free (arvore);
              arvore = NULL;
           }
           /* Situação 2: O nó possui somente um filho à direita */
           else if (arvore->esquerdo == NULL) {
              no *temp = arvore;
              arvore = arvore->direito;
              free (temp);
           }
           /* Situação 3: O nó possui somente um filho à esquerda */
           else if (arvore->direito == NULL) {
              no *temp = arvore;
              arvore = arvore->esquerdo;
              free (temp);
           }
           /* Situação 4: O nó possui dois filhos */
           else {
              no *aux = arvore->esquerdo;
              while (aux->direito != NULL) {
                 aux = aux->direito;
              }
              arvore->valor = aux->valor; /* troca os valores */
              aux->valor = valorRem;
              arvore->esquerdo = remover3(arvore->esquerdo, valorRem);
           }
 }
return arvore;
}
 