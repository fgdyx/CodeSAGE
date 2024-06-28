#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 if(FUN2())
 {
 VAR2 = NULL;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 if (VAR2 != NULL)
 {
 FUN5(*VAR2);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN6()
{
 int * VAR2;
 if(FUN2())
 {
 VAR2 = NULL;
 }
 if(FUN2())
 {
 if (VAR2 != NULL)
 {
 FUN5(*VAR2);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN7()
{
 int * VAR2;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 {
 int VAR3 = 5;
 VAR2 = &VAR3;
 }
 }
 if(FUN2())
 {
 FUN5(*VAR2);
 }
}
static void FUN8()
{
 int * VAR2;
 if(FUN2())
 {
 {
 int VAR3 = 5;
 VAR2 = &VAR3;
 }
 }
 if(FUN2())
 {
 FUN5(*VAR2);
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
