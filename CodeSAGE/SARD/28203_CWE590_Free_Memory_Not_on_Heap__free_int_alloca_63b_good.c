#ifndef VAR1
void FUN1(int * * VAR2)
{
 int * VAR3 = *VAR2;
 FUN2(VAR3[0]);
 free(VAR3);
}
#endif
