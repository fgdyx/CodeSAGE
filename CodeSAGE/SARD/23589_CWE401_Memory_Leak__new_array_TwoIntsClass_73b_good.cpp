#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4.FUN2();
 ;
}
void FUN3(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4.FUN2();
 delete[] VAR5;
}
#endif
