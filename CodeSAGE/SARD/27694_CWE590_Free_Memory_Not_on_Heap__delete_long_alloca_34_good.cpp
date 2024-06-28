#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 {
 long * VAR4 = new long;
 *VAR4 = 5L;
 VAR2 = VAR4;
 }
 VAR3.VAR5 = VAR2;
 {
 long * VAR2 = VAR3.VAR6;
 FUN2(*VAR2);
 delete VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
