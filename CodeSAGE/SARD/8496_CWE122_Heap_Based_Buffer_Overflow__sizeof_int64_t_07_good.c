#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4!=5)
 {
 FUN2("");
 }
 else
 {
 VAR3 = (VAR2 *)malloc(sizeof(*VAR3));
 *VAR3 = 2147483643LL;
 }
 FUN3(*VAR3);
 free(VAR3);
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 VAR3 = (VAR2 *)malloc(sizeof(*VAR3));
 *VAR3 = 2147483643LL;
 }
 FUN3(*VAR3);
 free(VAR3);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
