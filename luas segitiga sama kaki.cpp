#include <conio.h>
#include <iostream.h>
#include <math.h>
int main()
{

int x,y,z,n;
cout<<"Masukkan input:";
cin>>n;
if(n%2==1){
 for(x=1;x<=n;x++)
 {
 for(y=n;y>=x;y--)
 {
 cout<<"";
 }
 for(z=1;z<=x+(x-1);z++)
 cout<<"x";
 cout<<"\n";
 }
 }

getch();
return 0;
}