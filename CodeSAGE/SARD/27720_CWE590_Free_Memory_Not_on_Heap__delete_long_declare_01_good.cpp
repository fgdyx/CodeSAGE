#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 {
 long * VAR3 = new long;
 *VAR3 = 5L;
 VAR2 = VAR3;
 }
 FUN2(*VAR2);
 delete VAR2;
}
void FUN3()
{
 FUN1();
}
#endif
