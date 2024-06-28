#ifndef VAR1
void FUN1(long * VAR2);
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)calloc(1, sizeof(long));
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
