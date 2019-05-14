#include <iostream.h>
#include <conio.h>

main (){
	int n,i=1;
   float nilai,rata,jml=0;
   cout<<"Input Banyak Nilai = "; cin>>n;
   do
   {cout<<"Inputkan Nilai "<<i<<" = "; cin>>nilai;
   jml=jml+nilai;
   rata=jml/n;
   i++;}
   while(i<=n);
   cout<<"\n Total Nilai = "<<jml;
   cout<<"\n Rata Nilai = "<<rata;
   getch();}