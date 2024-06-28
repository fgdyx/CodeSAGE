#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 break;
 }
 while(1)
 {
 delete VAR3;
 break;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 int64_t VAR4;
 VAR3 = &VAR4;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 break;
 }
 while(1)
 {
 ;
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
