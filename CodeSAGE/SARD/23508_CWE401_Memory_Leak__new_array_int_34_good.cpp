#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 int VAR4[100];
 VAR2 = VAR4;
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 VAR3.VAR5 = VAR2;
 {
 int * VAR2 = VAR3.VAR6;
 ;
 }
}
static void FUN3()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 VAR3.VAR5 = VAR2;
 {
 int * VAR2 = VAR3.VAR6;
 delete[] VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
