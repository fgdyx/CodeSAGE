#ifndef VAR1
void FUN1(long * * VAR2)
{
 long * VAR3 = *VAR2;
 FUN2(*VAR3);
 delete VAR3;
}
#endif
