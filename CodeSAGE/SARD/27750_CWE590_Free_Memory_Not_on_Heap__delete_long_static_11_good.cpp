#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 long * VAR3 = new long;
 *VAR3 = 5L;
 VAR2 = VAR3;
 }
 }
 FUN4(*VAR2);
 delete VAR2;
}
static void FUN5()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN6())
 {
 {
 long * VAR3 = new long;
 *VAR3 = 5L;
 VAR2 = VAR3;
 }
 }
 FUN4(*VAR2);
 delete VAR2;
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
