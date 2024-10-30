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

  double diff = 0;
  std::ifstream fin2("datensumme.txt");
  for(int i = 0; i < 234; ++i){
    fin2>>a;
    diff= diff + (a-mean)*(a-mean);
  }
  std::cout << diff/234 << std::endl;
  fin.close();
  fin2.close();
}