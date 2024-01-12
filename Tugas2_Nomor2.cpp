#include<iostream>

using namespace std;
int main()
{
   float beli, diskon, harga;
   cout<<"Besar pembelian barang    Rp.  ";
   cin>>beli;
      if(beli>=1000000 && beli<=5000000)
      {
         diskon = (beli*20)/100;
         harga = beli-diskon;
      }
      else if(beli>5000000)
      {
         diskon = (beli*35)/100;
         harga = beli-diskon;
      }
      
      else
      {
         diskon = 0;
         harga=beli;
      }
      cout<<"Besar diskon yang diberikan: Rp.  "<<diskon<<endl;
      cout<<"Besar harga yang harus dibayarkan: Rp. "<<harga<<endl;
   return 0;
}