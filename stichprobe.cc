#include <iostream>
#include <cmath>
#include <fstream>

int  main(){
std::ifstream fin("datensumme.txt");
int a;
double summe = 0;
for(int i = 0; i < 234; ++i){
  fin>>a;
  summe = a + summe;
}
 std::cout << summe << std::endl; 
  double mean = summe/234;
  std::cout << mean << std::endl;
}