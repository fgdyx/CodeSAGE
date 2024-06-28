#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 if(VAR3==5)
 {
 VAR2 = NULL;
 }
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 if (VAR2 != NULL)
 {
 FUN3(*VAR2);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 long * VAR2;
 if(VAR3==5)
 {
 VAR2 = NULL;
 }
 if(VAR3==5)
 {
 if (VAR2 != NULL)
 {
 FUN3(*VAR2);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 long * VAR2;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 {
 long VAR4 = 5L;
 VAR2 = &VAR4;
 }
 }
 if(VAR3==5)
 {
 FUN3(*VAR2);
 }
}
static void FUN6()
{
 long * VAR2;
 if(VAR3==5)
 {
 {
 long VAR4 = 5L;
 VAR2 = &VAR4;
 }
 }
 if(VAR3==5)
 {
 FUN3(*VAR2);
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
