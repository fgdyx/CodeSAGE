#ifndef VAR1
void FUN1()
{
 int * VAR2 = VAR3;
 {
 int VAR4[10] = {0};
 memmove(VAR2, VAR4, 10*sizeof(int));
 FUN2(VAR2[0]);
 }
}
#endif
