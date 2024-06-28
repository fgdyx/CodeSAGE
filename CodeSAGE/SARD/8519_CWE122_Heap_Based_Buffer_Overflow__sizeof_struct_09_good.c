#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR3 = (VAR2 *)malloc(sizeof(*VAR3));
 VAR3->VAR5 = 1;
 VAR3->VAR6 = 2;
 }
 FUN3(VAR3);
 free(VAR3);
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR7)
 {
 VAR3 = (VAR2 *)malloc(sizeof(*VAR3));
 VAR3->VAR5 = 1;
 VAR3->VAR6 = 2;
 }
 FUN3(VAR3);
 free(VAR3);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
