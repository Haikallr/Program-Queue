#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

main()
{ 
     string queue[10];
     int depan=0;
     int belakang=0;
     int pilihan, i; 
	 string data;
	
do
{
  menu:
  cout<<"===================================="<<endl;
  cout<<"|	PROGRAM ARRAY OF QUEUE\t   |"<<endl;
  cout<<"===================================="<<endl;
  cout<<"[1] Masukan Data              	   |"<<endl;
  cout<<"[2] Keluarkan / Hapus Data    	   |"<<endl;
  cout<<"[3] Lihat Data Antrian        	   |"<<endl;
  cout<<"[4] Exit Program              	   |"<<endl;
  cout<<"===================================="<<endl;
  cout<<"Pilih Menu [1/2/3/4] : ";
  cin>>pilihan;

  switch (pilihan)
  {
  case 1: //enqueue
  //apakah queue belum penuh?
  if (belakang < 5 )
  { 
  cout<<"Data Masuk = "; 
  cin>>data;
  queue[belakang] = data;
  belakang++;
  getch(); 
  if (belakang == 0)
   depan = 0;
   }
   else
    cout<<"Queue penuh! \n";
    getch(); system("cls"); goto menu;
    break;

    case 2: //dequeue
    //apakah queue belum kosong?
    if (depan <= belakang)
    { 
          cout<<"Data keluar = "<<queue[depan];
          depan++;
          getch(); 
          }
          else
    cout<<"Queue kosong!\n";
    getch(); system("cls");
    break;
    
    case 3:
         cout<<endl;
         cout<<"Tampilan Data QUEUE Yang Sudah Di Masukan "<<endl; 
         for(i=depan; i<=belakang-1; i++)
		     
         cout<<"\nDATA ANTRIAN QUEUE "<<" "<<queue[i]<<endl;
         cout<<"\n";
         getch(); system("cls"); goto menu;
         break;

    case 4:
             cout<<"\nHELLO, THANK U FOR VISITING... ";
     
             }
             }
             while (pilihan != 4);        
			 getch();
}
