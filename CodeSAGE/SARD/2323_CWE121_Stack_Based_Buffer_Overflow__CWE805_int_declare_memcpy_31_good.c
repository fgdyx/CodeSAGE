#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 VAR2 = VAR4;
 {
 int * VAR5 = VAR2;
 int * VAR2 = VAR5;
 {
 int VAR6[100] = {0};
 memcpy(VAR2, VAR6, 100*sizeof(int));
 FUN2(VAR2[0]);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
