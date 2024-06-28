#ifndef VAR1
void FUN1(VAR2<long *> VAR3);
static void FUN2()
{
 long * VAR4;
 VAR2<long *> VAR3;
 VAR4 = NULL;
 VAR4 = (long *)realloc(VAR4, 1*sizeof(long));
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
