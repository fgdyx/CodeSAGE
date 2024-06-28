#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = new long;
 VAR3* VAR4 = new VAR5;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
static void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)malloc(100*sizeof(long));
 VAR3* VAR4 = new VAR6;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
