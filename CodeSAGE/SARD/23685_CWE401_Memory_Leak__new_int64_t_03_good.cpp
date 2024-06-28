#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(5==5)
 {
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 }
 if(5!=5)
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
 if(5==5)
 {
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 }
 if(5==5)
 {
 delete VAR3;
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 int64_t VAR4;
 VAR3 = &VAR4;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 }
 if(5==5)
 {
 ;
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(5==5)
 {
 int64_t VAR4;
 VAR3 = &VAR4;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 }
 if(5==5)
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
