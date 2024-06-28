#ifndef VAR1
void FUN1()
{
 int * VAR2 = VAR3;
 delete VAR2;
}
void FUN2()
{
 int * VAR2 = VAR4;
 free(VAR2);
}
#endif
