#ifndef VAR1
void FUN1(long * VAR2);
static void FUN2()
{
 long * VAR2;
 {
 long VAR3 = 5L;
 VAR2 = &VAR3;
 }
 FUN1(VAR2);
}
void FUN3(long * VAR2);
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
