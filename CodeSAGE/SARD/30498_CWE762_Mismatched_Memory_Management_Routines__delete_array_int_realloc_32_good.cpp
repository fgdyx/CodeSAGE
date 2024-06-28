#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 VAR2 = new int[100];
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 delete [] VAR2;
 }
}
static void FUN2()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 VAR2 = NULL;
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
