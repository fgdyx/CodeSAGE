#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 VAR2 = new int[100];
 VAR3.VAR4 = VAR2;
 {
 int * VAR2 = VAR3.VAR5;
 delete [] VAR2;
 }
}
static void FUN2()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 VAR2 = new int[100];
 delete [] VAR2;
 VAR3.VAR4 = VAR2;
 {
 int * VAR2 = VAR3.VAR5;
 ;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
