#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int;
 {
 int * VAR3 = VAR2;
 int * VAR2 = VAR3;
 delete VAR2;
 }
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = NULL;
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 {
 int * VAR3 = VAR2;
 int * VAR2 = VAR3;
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
