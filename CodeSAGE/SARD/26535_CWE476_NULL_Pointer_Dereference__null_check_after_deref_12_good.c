#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 {
 int *VAR2 = NULL;
 VAR2 = (int *)malloc(sizeof(int));
 *VAR2 = 5;
 FUN3(*VAR2);
 *VAR2 = 10;
 FUN3(*VAR2);
 }
 }
 else
 {
 {
 int *VAR2 = NULL;
 VAR2 = (int *)malloc(sizeof(int));
 *VAR2 = 5;
 FUN3(*VAR2);
 *VAR2 = 10;
 FUN3(*VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
