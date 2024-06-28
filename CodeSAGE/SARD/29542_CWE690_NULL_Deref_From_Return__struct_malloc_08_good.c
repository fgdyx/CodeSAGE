#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(1*sizeof(VAR2));
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 if (VAR3 != NULL)
 {
 VAR3[0].VAR4 = 1;
 VAR3[0].VAR5 = 1;
 FUN4(&VAR3[0]);
 free(VAR3);
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(1*sizeof(VAR2));
 if(FUN6())
 {
 if (VAR3 != NULL)
 {
 VAR3[0].VAR4 = 1;
 VAR3[0].VAR5 = 1;
 FUN4(&VAR3[0]);
 free(VAR3);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
