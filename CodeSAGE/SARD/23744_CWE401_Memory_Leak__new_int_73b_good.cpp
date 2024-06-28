#ifndef VAR1
void FUN1(VAR2<int *> VAR3)
{
 int * VAR4 = VAR3.FUN2();
 ;
}
void FUN3(VAR2<int *> VAR3)
{
 int * VAR4 = VAR3.FUN2();
 delete VAR4;
}
#endif
