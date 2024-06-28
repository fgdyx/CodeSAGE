#ifndef VAR1
void FUN1(int * * VAR2)
{
 int * VAR3 = *VAR2;
 ;
}
void FUN2(int * * VAR2)
{
 int * VAR3 = *VAR2;
 delete VAR3;
}
#endif
