#ifndef VAR1
void FUN1(VAR2<int, long *> VAR3)
{
 long * VAR4 = VAR3[2];
 FUN2(*VAR4);
 delete VAR4;
}
#endif
