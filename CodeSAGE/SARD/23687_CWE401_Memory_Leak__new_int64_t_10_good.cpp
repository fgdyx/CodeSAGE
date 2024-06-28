#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 }
 if(VAR5)
 {
 FUN3("");
 }
 else
 {
 delete VAR3;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 }
 if(VAR4)
 {
 delete VAR3;
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR5)
 {
 FUN3("");
 }
 else
 {
 int64_t VAR6;
 VAR3 = &VAR6;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 }
 if(VAR4)
 {
 ;
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 int64_t VAR6;
 VAR3 = &VAR6;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 }
 if(VAR4)
 {
 ;
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
