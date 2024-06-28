#ifndef VAR1
void FUN1(int * VAR2[])
{
 int * VAR3 = VAR2[2];
 {
 int VAR4[10] = {0};
 memcpy(VAR3, VAR4, 10*sizeof(int));
 FUN2(VAR3[0]);
 }
}
#endif
