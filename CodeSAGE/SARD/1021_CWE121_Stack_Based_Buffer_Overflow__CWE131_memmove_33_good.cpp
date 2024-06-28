#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = (int *)FUN2(10*sizeof(int));
 {
 int * VAR2 = VAR3;
 {
 int VAR4[10] = {0};
 memmove(VAR2, VAR4, 10*sizeof(int));
 FUN3(VAR2[0]);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
