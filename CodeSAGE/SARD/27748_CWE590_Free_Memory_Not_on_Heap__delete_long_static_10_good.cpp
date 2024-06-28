#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 {
 long * VAR4 = new long;
 *VAR4 = 5L;
 VAR2 = VAR4;
 }
 }
 FUN3(*VAR2);
 delete VAR2;
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR5)
 {
 {
 long * VAR4 = new long;
 *VAR4 = 5L;
 VAR2 = VAR4;
 }
 }
 FUN3(*VAR2);
 delete VAR2;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
