#ifndef VAR1
void FUN1(int * VAR2[])
{
 int * VAR3 = VAR2[2];
 FUN2(VAR3[0]);
 delete [] VAR3;
}
#endif
