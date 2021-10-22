#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char user [14];
	int totW;
	int jam,totJ;
	int menit,totM;
	int detik, totD;
	int w;
	
	cout<<"========================\n";
	cout<<"Tarif Rp 5000 per jam" ;cin>>jam;
	cout<<"Masukkan Nama User : " ;cin>>user;
	cout<<"========================\n";
	cout<<"Berapa Lama User Bermain: " ;cin>>user;
	cout<<"Masukkan jam :";
	cin>>jam;
	cout<<"Masukkan Menit :";
	cin>>menit;
	cout<<"Masukkan Detik :";
	cin>>detik;
	
	totJ=jam*5000;
	totM=menit*2500/30;
	totD=detik*2500/1800;
	
	cout<< "Total Pembayaran: Rp. ";
	totW =totJ+totM+totD;
	cout<<totW <<endl;

	
	getch();
	
	
	
}
