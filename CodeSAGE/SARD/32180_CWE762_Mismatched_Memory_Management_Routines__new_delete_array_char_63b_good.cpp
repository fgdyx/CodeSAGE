#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 delete [] VAR3;
}
void FUN2(char * * VAR2)
{
 char * VAR3 = *VAR2;
 delete VAR3;
}
#endif
