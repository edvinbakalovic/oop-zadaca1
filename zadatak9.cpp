#include <iostream>

int power(int baza,int eksponent)
{
  int rezultat=1;
  for(int i=0;i<eksponent;i++)
    rezultat*=baza;
  
  return rezultat;
}

int main()
{
  int broj1,broj2;
  char operacija;

  std::cout<<"Unesi prvi broj: ";
  if(!(std::cin>>broj1)){
    std::cout<<"Greska: Niste unijeli cijeli broj!"<<std::endl;
    return 1;
  }

  std::cout<<"Unesi drugi broj: ";
  if(!(std::cin>>broj2)){
    std::cout<<"Greska: Niste unijeli cijeli broj!"<<std::endl;
    return 1;
  }
 
  std::cout<<"Unesi operaciju: ";
  std::cin>>operacija;

  switch (operacija) {
    case '+':
    std::cout<<"Rezultat izraza "<<broj1<<" + "<<broj2<<" je "<<broj1+broj2<<std::endl;
    break;
    
    case '-':
    std::cout<<"Rezultat izraza "<<broj1<<" - "<<broj2<<" je "<<broj1-broj2<<std::endl;
    break;

    case '*':
    std::cout<<"Rezultat izraza "<<broj1<< " * "<<broj2<<" je "<<broj1*broj2<<std::endl;
    break;

    case '/':
    if(broj2==0){
      std::cout<<"Dijeljenje sa nulom je nedefinirana operacija."<<std::endl;
      break;
    }
    std::cout<<"Rezultat izraza "<<broj1<< " / "<<broj2<<" je "<<(double)broj1/broj2<<std::endl;
    break;

    case '%':
    std::cout<<"Rezultat izraza "<<broj1<< " % "<<broj2<< " je "<<broj1%broj2<<std::endl;
    break;

    case '^':
    std::cout<<"Rezultat izraza "<<broj1<< " ^ "<<broj2<< " je "<<power(broj1,broj2)<<std::endl;
    break;

    default:
    std::cout<<"Operacija koju ste unijeli ne postoji!"<<std::endl;
    break;
  }


  
  
  return 0;
}
