#include <iostream>

int main()
{
 // char words[3][10] = {"doe","dom","donaruma"};

  std::cout<<"Unesite koliko rijeci sadrzi vasa sekvenca: ";
  int n;
  std::cin>>n;

  char words[n][20];

  std::cout<<std::endl;
  for(int i=0;i<n;i++)
  {
    std::cout<<"Unesite "<<i+1<<". rijec: ";
    std::cin>>words[i];
  }

  std::cout<<std::endl<<"Rijeci: ";
  for(int i=0;i<n;i++)
    std::cout<<words[i]<<" ";

  char prefix[20]; // max 20 slova jedna rijec 
  int k=0;
  while(words[0][k]!='0' && k<19){
    prefix[k]=words[0][k];
    k++;
  }
  prefix[k]='\0';
  
  for(int i=0;i<n;i++){
    int j=0;
    while(words[i][j]!='\0' && prefix[j]!='\0' && prefix[j]==words[i][j])
      j++;

    prefix[j]='\0';

    if(prefix[0]=='\0')
        break;
  }


  std::cout<<std::endl<<"Najduzi korijen rijeci je: '"<<prefix<<"'"<<std::endl;
 
  return 0;
}
