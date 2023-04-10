#include<iostream>
#include<math.h>
using namespace std;
long int calcCuadrado(int num);
float calcRaiz(int num);

long int calcCuadrado(int num){
    return pow(num, 2);
}

float calcRaiz(int num){
    return sqrt(num);
}
