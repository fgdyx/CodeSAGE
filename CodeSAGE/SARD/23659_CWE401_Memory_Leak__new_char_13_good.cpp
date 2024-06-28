#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new char;
 *VAR2 = '';
 FUN2(*VAR2);
 }
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 delete VAR2;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new char;
 *VAR2 = '';
 FUN2(*VAR2);
 }
 if(VAR3==5)
 {
 delete VAR2;
 }
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 char VAR4;
 VAR2 = &VAR4;
 *VAR2 = '';
 FUN2(*VAR2);
 }
 if(VAR3==5)
 {
 ;
 }
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 char VAR4;
 VAR2 = &VAR4;
 *VAR2 = '';
 FUN2(*VAR2);
 }
 if(VAR3==5)
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
