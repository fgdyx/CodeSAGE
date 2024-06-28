#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(1*sizeof(VAR2));
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 if (VAR3 != NULL)
 {
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 free(VAR3);
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(1*sizeof(VAR2));
 if(VAR5)
 {
 if (VAR3 != NULL)
 {
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 free(VAR3);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
