#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 int *VAR3 = NULL;
 VAR3 = (int *)malloc(sizeof(int));
 *VAR3 = 5;
 FUN3(*VAR3);
 *VAR3 = 10;
 FUN3(*VAR3);
 }
 }
}
static void FUN4()
{
 if(VAR4)
 {
 {
 int *VAR3 = NULL;
 VAR3 = (int *)malloc(sizeof(int));
 *VAR3 = 5;
 FUN3(*VAR3);
 *VAR3 = 10;
 FUN3(*VAR3);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
