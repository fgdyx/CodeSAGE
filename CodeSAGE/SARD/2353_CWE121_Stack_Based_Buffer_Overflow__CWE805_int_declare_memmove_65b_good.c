#ifndef VAR1
void FUN1(int * VAR2)
{
 {
 int VAR3[100] = {0};
 memmove(VAR2, VAR3, 100*sizeof(int));
 FUN2(VAR2[0]);
 }
}
#endif
