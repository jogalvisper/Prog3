// Calcular los números primos entre 1 y 100

// incluir las librerías que vamos a usar
#include <iostream>
#include <cmath>

void print_even(int nmin, int nmax); //declaración

int main(void)
{
  const int m = 1;
  const int n =20;
  

  print_even(m, n);
  print_even(m/2, 2*n);
  
  

  return 0;
}

void print_even(int nmin, int nmax) //implementación
{
  for(int ii =nmin; ii <= nmax ; ii=ii+1){

    if (ii%2 == 0) {
      std::cout << ii << " ";
    }
  }
  std::cout << "\n";
}