#include<stdlib.h>
#include<dos.h>
void main()
{
int i;
for(i=500;i<2000;i+=100)
{
 sound(i);
 delay(100);
 nosound();
}
}
