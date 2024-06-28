#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 if(VAR4==5)
 {
 VAR3 = NULL;
 }
 if(VAR4!=5)
 {
 FUN2("");
 }
 else
 {
 if (VAR3 != NULL)
 {
 FUN3(*VAR3);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 if(VAR4==5)
 {
 VAR3 = NULL;
 }
 if(VAR4==5)
 {
 if (VAR3 != NULL)
 {
 FUN3(*VAR3);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 if(VAR4!=5)
 {
 FUN2("");
 }
 else
 {
 {
 int64_t VAR5 = 5LL;
 VAR3 = &VAR5;
 }
 }
 if(VAR4==5)
 {
 FUN3(*VAR3);
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 if(VAR4==5)
 {
 {
 int64_t VAR5 = 5LL;
 VAR3 = &VAR5;
 }
 }
 if(VAR4==5)
 {
 FUN3(*VAR3);
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
