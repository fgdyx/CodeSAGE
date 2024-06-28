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
 {
 VAR2 * VAR5 = new VAR2;
 *VAR5 = 5LL;
 VAR3 = VAR5;
 }
 }
 FUN3(*VAR3);
 delete VAR3;
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR6)
 {
 {
 VAR2 * VAR5 = new VAR2;
 *VAR5 = 5LL;
 VAR3 = VAR5;
 }
 }
 FUN3(*VAR3);
 delete VAR3;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
