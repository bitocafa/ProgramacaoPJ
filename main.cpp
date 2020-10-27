#include <iostream> //biblioteca padrao c++
using namespace std;

#include <stdio.h> //bibliotecas padrao para C
#include <stdlib.h>

#define LED 1 //constantes 
#define LED2 2
#define LED3 3

void ledsModoUm(){
  //digitalWrite(LED, HIGH);
  //digitalWrite(LED2, LOW);
  //digitalWrite(LED3, HIGH);
}

void ledsModoDois(){
  //digitalWrite(LED, LOW);
  //digitalWrite(LED2, LOW);
  //digitalWrite(LED3, HIGH);
}

int proximoNumero(int numero){
  numero++; // isto equivale a numero = numero+1
  if (numero > 9) return 0;
  return numero;
}

int proximoNumeroAlternativo(int numero){
  return (numero++) % 10;
}

void proximoNumeroPonteiro(int *ponteiroNumero){
  (*ponteiroNumero)++;
  if( (*ponteiroNumero) == 10) *ponteiroNumero = 0;
}

int main() { //main = funcao principal

  int a = 0;
  double valor = 5.43;
  bool foiExcluida = true; //ou false
  string mensagem = "Alo pessoal";

  int vetorInteiro[3]; //VETOR: Indice comeca em zero!
  vetorInteiro[0] = 54;
  vetorInteiro[1] = 12;
  vetorInteiro[2] = 4;

  bool vetorBooleana[3];
  vetorBooleana[0]=false;
  vetorBooleana[1]=false;
  vetorBooleana[2]=false;

  int matrizInteiro[2][3];
  matrizInteiro[0][2] = 3;

  a = proximoNumero(a); //Atualiza valor de a
  cout << "Primeira soma: " << a << endl;

  proximoNumeroPonteiro(&a); //Passa endereco de a
  cout << "Segunda soma: " << a << endl;

  return 0;
}