#ifndef VAR1
void FUN1(VAR2<int, int *> VAR3)
{
 int * VAR4 = VAR3[2];
 {
 int VAR5[10] = {0};
 memmove(VAR4, VAR5, 10*sizeof(int));
 FUN2(VAR4[0]);
 free(VAR4);
 }
}
#endif
