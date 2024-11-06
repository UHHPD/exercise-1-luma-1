#include <iostream>
#include <cmath>
#include <fstream>

int  main(){
std::ifstream fin("datensumme.txt");
std::ofstream fout("mittelwerte.txt");
std::ofstream fout2("varianzen.txt");
std::ifstream fin2("datensumme.txt");
int a;

for(int i = 0; i < 26; ++i){
  double summe = 0;
  for(int j = 0; j < 9; ++j){
    fin>>a;
    summe = a + summe;
 } 
 double mean = summe/9;
 fout << mean << std::endl;
 double diff = 0;
  
  for(int i = 0; i < 9; ++i){
    fin2>>a;
    diff= diff + (a-mean)*(a-mean);
  }

    fout2 << diff/9 << std::endl;
  }
  
  
  fin.close();
  fin2.close();
  fout.close();
  fout2.close();
}