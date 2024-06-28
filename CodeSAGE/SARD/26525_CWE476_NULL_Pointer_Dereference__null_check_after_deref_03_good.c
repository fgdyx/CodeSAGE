#ifndef VAR1
static void FUN1()
{
 if(5!=5)
 {
 FUN2("");
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
static void FUN4()
{
 if(5==5)
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
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
