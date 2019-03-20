#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,j,n;
    int Arr[50];
    int tmp;
cout << "Masukkan angka yang ingin diurutkan: ";
cin >> n;
cout << endl;
for(i=1; i<=n; i++)
{
       cout<<"angka ke-"<<i<<" = ";
       cin>>Arr[i];
}

for(i=1; i<=n; i++)
{
       for(j=i; j<=n; j++)
       {
              if(Arr[i] > Arr[j])
              {
                     tmp = Arr[j];
                     Arr[j] = Arr[i];
                     Arr[i] = tmp;
              }
       }
}
cout << endl;
cout << "Hasil Pengurutan angka Secara Ascending ";
cout << endl;
for(i=1;i<=n;i++)
{
       cout<<Arr[i]<<" ";
}
getch();
}
