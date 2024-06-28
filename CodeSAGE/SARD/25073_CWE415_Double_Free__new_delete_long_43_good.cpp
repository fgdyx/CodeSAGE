#ifndef VAR1
static void FUN1(long * &VAR2)
{
 VAR2 = new long;
}
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 delete VAR2;
}
static void FUN3(long * &VAR2)
{
 VAR2 = new long;
 delete VAR2;
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 FUN3(VAR2);
 ;
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
