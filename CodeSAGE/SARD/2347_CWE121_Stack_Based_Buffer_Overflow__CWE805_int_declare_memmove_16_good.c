#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 while(1)
 {
 VAR2 = VAR4;
 break;
 }
 {
 int VAR5[100] = {0};
 memmove(VAR2, VAR5, 100*sizeof(int));
 FUN2(VAR2[0]);
 }
}
void FUN3()
{
 FUN1();
}
#endif
