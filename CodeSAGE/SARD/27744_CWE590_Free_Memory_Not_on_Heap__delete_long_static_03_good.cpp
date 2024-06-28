#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 {
 long * VAR3 = new long;
 *VAR3 = 5L;
 VAR2 = VAR3;
 }
 }
 FUN3(*VAR2);
 delete VAR2;
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 {
 long * VAR3 = new long;
 *VAR3 = 5L;
 VAR2 = VAR3;
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
