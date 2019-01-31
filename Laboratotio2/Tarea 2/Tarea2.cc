#include <iostream>

int main(){

int valor1 = 1;
int valor2 = 1;

int resultado = ++valor1 + valor2++;
//El valor queda 3 ya que al agregar ++ despues de valor 2
// si ordena que se agregue el valor despues de evaluar la expresión.

std::printf("valor1: %i, valor2: %i, resultado: %i", valor1, valor2, resultado);

}