#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 if(FUN2())
 {
 VAR2 = NULL;
 }
 else
 {
 VAR2 = NULL;
 }
 if(FUN2())
 {
 if (VAR2 != NULL)
 {
 FUN3(*VAR2);
 }
 else
 {
 FUN4("");
 }
 }
 else
 {
 if (VAR2 != NULL)
 {
 FUN3(*VAR2);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN5()
{
 long * VAR2;
 if(FUN2())
 {
 {
 long VAR3 = 5L;
 VAR2 = &VAR3;
 }
 }
 else
 {
 {
 long VAR3 = 5L;
 VAR2 = &VAR3;
 }
 }
 if(FUN2())
 {
 FUN3(*VAR2);
 }
 else
 {
 FUN3(*VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
