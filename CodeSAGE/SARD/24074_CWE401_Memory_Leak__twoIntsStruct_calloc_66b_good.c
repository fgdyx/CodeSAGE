#ifndef VAR1
void FUN1(VAR2 * VAR3[])
{
 VAR2 * VAR4 = VAR3[2];
 ;
}
void FUN2(VAR2 * VAR3[])
{
 VAR2 * VAR4 = VAR3[2];
 free(VAR4);
}
#endif
