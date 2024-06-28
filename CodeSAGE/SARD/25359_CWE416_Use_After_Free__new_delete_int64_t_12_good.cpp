#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 delete VAR3;
 }
 else
 {
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 delete VAR3;
 }
 if(FUN2())
 {
 ;
 }
 else
 {
 ;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 }
 else
 {
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 }
 if(FUN2())
 {
 FUN4(*VAR3);
 }
 else
 {
 FUN4(*VAR3);
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
