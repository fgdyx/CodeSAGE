#ifndef VAR1
void FUN1(VAR2<int, int *> VAR3)
{
 int * VAR4 = VAR3[2];
 FUN2(VAR4[0]);
 delete [] VAR4;
}
#endif
