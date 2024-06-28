#ifndef VAR1
void FUN1(long * * VAR2)
{
 long * VAR3 = *VAR2;
 free(VAR3);
}
void FUN2(long * * VAR2)
{
 long * VAR3 = *VAR2;
 ;
}
#endif
