#include <iostream.h>
#include <conio.h>

int main (void)
{
int jumlah=0;
int bilangan;
for (bilangan=1;bilangan <= 5;bilangan++)
{
if (bilangan == 3 || bilangan  == 4) continue;
jumlah += bilangan;
}
cout <<"Deret Bilan
gan : 1 + 2 + 3 + 4 +...+"<<bilangan<<endl;
cout<< "Jumlah Deret Bilangan = "<<jumlah;
getch();
return 0;
}
