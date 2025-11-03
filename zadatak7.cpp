#include <iostream>
#include <string>

int main(){

  std::cout<<"Unesite proizvoljnu recenicu: ";
  std::string recenica, sastavljenaRecenica="", obrnutaRecenica="";
  
  getline(std::cin,recenica);
  for(int i=0;i<recenica.size();i++)
  {
    recenica[i]=tolower(recenica[i]);
    if(recenica[i]!=' ' && recenica[i]!='?' && recenica[i]!='!' && recenica[i]!=',' && recenica [i]!='.')
      sastavljenaRecenica+=recenica[i];
  }
  //std::cout<<recenica<<std::endl;
  //std::cout<<sastavljenaRecenica<<std::endl;
  
  for(int i=sastavljenaRecenica.size()-1;i>=0;i--)
    obrnutaRecenica+=sastavljenaRecenica[i];

 // std::cout<<obrnutaRecenica<<std::endl;
    if (sastavljenaRecenica==obrnutaRecenica) {
      std::cout<<"Unesena recenica je palindrom!"<<std::endl;
    }else {
      std::cout<<"Unesena recenica nije palindrom!"<<std::endl;
    }
  return 0;
}
