#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 long * *VAR3 = &VAR2;
 long * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 long * VAR2 = *VAR3;
 VAR2 = (long *)malloc(100*sizeof(long));
 *VAR3 = VAR2;
 }
 {
 long * VAR2 = *VAR4;
 free(VAR2);
 }
}
static void FUN2()
{
 long * VAR2;
 long * *VAR3 = &VAR2;
 long * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 long * VAR2 = *VAR3;
 VAR2 = new long;
 *VAR3 = VAR2;
 }
 {
 long * VAR2 = *VAR4;
 delete VAR2;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
