#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 VAR2 = (int *)FUN2(10*sizeof(int));
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 {
 int VAR5[10] = {0};
 memmove(VAR2, VAR5, 10*sizeof(int));
 FUN3(VAR2[0]);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
