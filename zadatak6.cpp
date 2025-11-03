#include <iostream>


int main()
{
  std::cout<<"Unesite rijec za kompresiju: ";
  char rijec[100];
  std::cin>>rijec;

  int brojac=1,i=0;
  char[100] rijecc="";
  while(rijec[i]!='\0')
  {
    if(rijec[i]==rijec[i+1])
        brojac++;
    else{
      rijecc+
      std::cout<<rijec[i]<<brojac;
      brojac=1;
    }
    i++;
  }
  std::cout<<std::endl;
  return 0;
}
