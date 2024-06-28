#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 {
 int * VAR4 = new int;
 *VAR4 = 5;
 VAR2 = VAR4;
 }
 VAR3.VAR5 = VAR2;
 {
 int * VAR2 = VAR3.VAR6;
 FUN2(*VAR2);
 delete VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
