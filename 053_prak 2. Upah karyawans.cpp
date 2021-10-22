/*Program Upah Karyawan*/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

main(){
	cout<<"====================="<<endl;
	cout<<"Program Upah Karyawan"<<endl;
	cout<<"====================="<<endl;
	
	char nama;
	int golongan;
	int jmkrj,upjm,totu;
	
	//input 
	cout<<"\n Program Upah Karyawan"<<endl;
	cout<<"\nNama"; cin>>nama;
	cout<<"Golongan: ";
	cin>>golongan;
	cout<<"Jumlah Jam Kerja: ";
	cin>>jmkrj;
	
	//Jumlah Upah per jam berdasarkan golongan 
	switch (golongan){
	 case 'A':;
		upjm=5000;
		break;
	 case 'B':;
		upjm=7000;
		break;
	 case 'C':;
		upjm=8000;
		break;
	 case 'D':;
		upjm=10000;
		break;	
	}
	
	totu=jmkrj*upjm;
	
	//cek apakah jam kerja lebih dari 48 jam
	if ((jmkrj - 48) > 0 ) {
		totu=totu+((jmkrj-48)*4000);
	}
	
	//ouput
	cout<<endl;
	cout<<nama<< "Menerima Upah Rp."<<totu<<"prmg";
	cout<<endl;
	
	return 0;	
}
