#ifndef VAR1
void FUN1(int * VAR2)
{
 {
 int VAR3[10] = {0};
 memcpy(VAR2, VAR3, 10*sizeof(int));
 FUN2(VAR2[0]);
 }
}
#endif
