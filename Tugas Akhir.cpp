#include<iostream>
#include<stdio.h>
using namespace std;

int main(void)
{
	int kode;
	cout<<"Masukan Kode";
	cin>>kode;
	
	switch(kode)
	{
	  case 1:
	  	cout<<"Senin";
	  	break;
	  case 2:
	  	cout<<"Selasa";
	  	break;
	  case 3:
	  	cout<<"Rabu";
	  	break;
	  case 4:
	  	cout<<"Kamis";
	  	break;
	  case 5:
	  	cout<<"Jum'at";
	  	break;
	  case 6:
	  	cout<<"Sabtu";
	  	break;
	  case 7:
	  	cout<<"Minggu";
	  	break;
	  default:
	  	cout<<"Kode Tidak Tersedia atau Tidak Ada !!!";
	  	cout<<"Kode 1-7 Hari Senin sampai Minggu";
	  	break;
	}
}
