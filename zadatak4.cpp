#include <iostream>

int main()
{
  std::cout<<"Unesi velicinu sekvence: ";
  int n;
  std::cin>>n;
  int array[n];

  std::cout<<"Unesi elemente sekvence odvojene praznim mjestom: ";
  for(int i=0;i<n;i++)
    std::cin>>array[i];
  

  std::cout<<std::endl<<"Unesena sekvenca je: ";
  for(int i=0;i<n;i++)
    std::cout<<array[i]<<" ";
  
 
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-1;j++)
    {
      if (array[j]>array[j+1]) {
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }

  int k=1;
  std::cout<<std::endl<<"Elementi koji nedostaju: ";
  for(int i=0;i<n;i++){
    if(array[i]<1)
      continue;
    while (k<array[i]) {
      std::cout<<k++<<" ";
    }

    if(array[i]==k)
      k++;
  }
  std::cout<<k<<std::endl;
     return 0;
}
