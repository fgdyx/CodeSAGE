#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 free(VAR3);
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 }
 if(FUN2())
 {
 free(VAR3);
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR3 = new VAR2;
 }
 if(FUN2())
 {
 delete VAR3;
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2;
 }
 if(FUN2())
 {
 delete VAR3;
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
