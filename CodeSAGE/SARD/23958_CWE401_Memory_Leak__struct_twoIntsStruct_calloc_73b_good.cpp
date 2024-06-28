#ifndef VAR1
void FUN1(VAR2<struct VAR3 *> VAR4)
{
 struct VAR3 * VAR5 = VAR4.FUN2();
 ;
}
void FUN3(VAR2<struct VAR3 *> VAR4)
{
 struct VAR3 * VAR5 = VAR4.FUN2();
 free(VAR5);
}
#endif
