#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 int *VAR2 = NULL;
 VAR2 = (int *)malloc(sizeof(int));
 *VAR2 = 5;
 FUN4(*VAR2);
 *VAR2 = 10;
 FUN4(*VAR2);
 }
 }
}
static void FUN5()
{
 if(FUN6())
 {
 {
 int *VAR2 = NULL;
 VAR2 = (int *)malloc(sizeof(int));
 *VAR2 = 5;
 FUN4(*VAR2);
 *VAR2 = 10;
 FUN4(*VAR2);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
