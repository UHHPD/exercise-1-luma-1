#include <iostream>
#include <cmath>
#include <fstream>

int main(){

  std::ofstream fout("datensumme.txt");
  std::ifstream fin("daten.txt");

  int summand_1 ;
  int summand_2 ;
  int summe;

  for(int i = 0; i < 234; ++i){
    
    fin>>summand_1>>summand_2;
    fout<<summand_1+summand_2<<std::endl;
    std::cout<<summand_1+summand_2<<std::endl;

  }

  
  fin.close();
  fout.close();
}