#ifndef VAR1
static void FUN1()
{
 long * VAR2 = VAR3;
 FUN2(*VAR2);
 delete VAR2;
}
static void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 {
 long * VAR4 = new long;
 *VAR4 = 5L;
 VAR2 = VAR4;
 }
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
