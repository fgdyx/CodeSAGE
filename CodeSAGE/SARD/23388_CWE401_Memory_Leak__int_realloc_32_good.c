#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 VAR2 = (int *)FUN2(100*sizeof(int));
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 ;
 }
}
static void FUN4()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 free(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
