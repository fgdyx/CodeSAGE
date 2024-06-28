#ifndef VAR1
void FUN1(VAR2<long *> VAR3)
{
 long * VAR4 = VAR3.FUN2();
 FUN3(VAR4[0]);
 delete [] VAR4;
}
#endif
