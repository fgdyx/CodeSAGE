#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR4 = (VAR3 *)FUN3(100*sizeof(VAR3));
 VAR4[0] = 5LL;
 FUN4(VAR4[0]);
 FUN1(&VAR4);
}
void FUN5(void * VAR2);
static void FUN6()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR4 = (VAR3 *)malloc(100*sizeof(VAR3));
 VAR4[0] = 5LL;
 FUN4(VAR4[0]);
 FUN5(&VAR4);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
