#ifndef VAR1
void FUN1(VAR2<int *> VAR3)
{
 int * VAR4 = VAR3[2];
 {
 int VAR5[100] = {0};
 memcpy(VAR4, VAR5, 100*sizeof(int));
 FUN2(VAR4[0]);
 }
}
#endif
