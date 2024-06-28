#ifndef VAR1
static void FUN1(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4].VAR5 = 1;
 VAR3[VAR4].VAR6 = 2;
 }
 }
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 FUN3(&VAR3[0]);
}
static void FUN4(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4].VAR5 = 1;
 VAR3[VAR4].VAR6 = 2;
 }
 }
 free(VAR3);
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN4(VAR3);
 ;
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
