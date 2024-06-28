#ifndef VAR1
void FUN1(long * VAR2)
{
 FUN2(*VAR2);
 delete VAR2;
}
static void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 {
 long * VAR3 = new long;
 *VAR3 = 5L;
 VAR2 = VAR3;
 }
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
