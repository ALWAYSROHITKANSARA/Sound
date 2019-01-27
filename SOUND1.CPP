#include<stdlib.h>
#include<dos.h>
#include<conio.h>
void main()
{
for(int i=370;i<470;i+=10)
{
 for(int j=i+100;j<800;j+=10)
 {
 sound(j);
 delay(50);
 nosound();
 if(kbhit())
 exit(0);
}
}
}
