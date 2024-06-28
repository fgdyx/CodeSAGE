#ifndef VAR1
void FUN1()
{
 long * VAR2 = VAR3;
 free(VAR2);
}
void FUN2()
{
 long * VAR2 = VAR4;
 delete [] VAR2;
}
#endif
