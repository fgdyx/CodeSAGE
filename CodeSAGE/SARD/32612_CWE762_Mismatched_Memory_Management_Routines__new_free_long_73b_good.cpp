#ifndef VAR1
void FUN1(VAR2<long *> VAR3)
{
 long * VAR4 = VAR3.FUN2();
 free(VAR4);
}
void FUN3(VAR2<long *> VAR3)
{
 long * VAR4 = VAR3.FUN2();
 delete VAR4;
}
#endif
