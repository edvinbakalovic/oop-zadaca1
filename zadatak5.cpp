#include <iostream>
int len(char word[]){
  int brojac=0,i=0;
  while(word[i]!='\0'){
    brojac++;
    i++;
  }

  return brojac;
}

int main(){
  char rijec1[100];
  char rijec2[200];
a:
  std::cout<<"Unesite prvu rijec: ";
  std::cin>>rijec1;

  std::cout<<"Unesite drugu rijec: ";
  std::cin>>rijec2;

  if (len(rijec1)!=len(rijec2))
  {
    std::cout<<"Rijeci moraju biti jednake!";
    goto a;
  }
  
  int brojac=0;
  for(int i=0;i<len(rijec1);i++)
  {
    if(rijec1[i]!=rijec2[i])
      brojac++;
  }

  std::cout<<"Hamming distance: "<<brojac<<std::endl;
  
return 0;
}

// dodati samo da nema razlike izmedju velikih i malih slova
