//Membuat Tabel Perkalian
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  
  cout<< "***MEMBUAT TABEL PERKALIAN*** \n\n\n";
  
 
    cout <<"-------------------------------------------------------------";
    for(int o=1; o<=10; o++)
    {
     cout <<"\n|";
     for (int u=1; u<=10; u++)
     cout << setw(3)<< o*u << setw(3) << "|";
    cout<<"\n-------------------------------------------------------------";
     }
     cout << "\n";
     return 0;
       
    }
