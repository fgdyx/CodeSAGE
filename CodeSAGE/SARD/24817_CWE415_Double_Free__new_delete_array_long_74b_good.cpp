#ifndef VAR1
void FUN1(VAR2<int, long *> VAR3)
{
 long * VAR4 = VAR3[2];
 delete [] VAR4;
}
void FUN2(VAR2<int, long *> VAR3)
{
 long * VAR4 = VAR3[2];
 ;
}
#endif
