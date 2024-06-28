#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 }
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 free(VAR3);
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 }
 if(FUN2())
 {
 free(VAR3);
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 VAR3 = (VAR2 *)FUN8(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 }
 if(FUN2())
 {
 ;
 }
}
static void FUN9()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = (VAR2 *)FUN8(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 }
 if(FUN2())
 {
 ;
 }
}
void FUN10()
{
 FUN1();
 FUN6();
 FUN7();
 FUN9();
}
#endif
