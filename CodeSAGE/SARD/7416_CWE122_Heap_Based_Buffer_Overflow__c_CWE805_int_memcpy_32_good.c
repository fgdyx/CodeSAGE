#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 VAR2 = (int *)malloc(100*sizeof(int));
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 {
 int VAR5[100] = {0};
 memcpy(VAR2, VAR5, 100*sizeof(int));
 FUN2(VAR2[0]);
 free(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
