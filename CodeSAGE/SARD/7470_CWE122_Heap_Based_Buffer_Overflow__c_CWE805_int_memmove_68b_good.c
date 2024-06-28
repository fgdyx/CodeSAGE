#ifndef VAR1
void FUN1()
{
 int * VAR2 = VAR3;
 {
 int VAR4[100] = {0};
 memmove(VAR2, VAR4, 100*sizeof(int));
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
#endif
