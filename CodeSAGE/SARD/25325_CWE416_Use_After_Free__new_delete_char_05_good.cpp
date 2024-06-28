#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new char;
 *VAR2 = '';
 delete VAR2;
 }
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 ;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new char;
 *VAR2 = '';
 delete VAR2;
 }
 if(VAR3)
 {
 ;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new char;
 *VAR2 = '';
 }
 if(VAR3)
 {
 FUN5(*VAR2);
 }
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new char;
 *VAR2 = '';
 }
 if(VAR3)
 {
 FUN5(*VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN3();
 FUN4();
 FUN6();
}
#endif
