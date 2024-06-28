#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 char * VAR3 = new char;
 *VAR3 = '';
 VAR2 = VAR3;
 }
 }
 FUN4(*VAR2);
 delete VAR2;
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN6())
 {
 {
 char * VAR3 = new char;
 *VAR3 = '';
 VAR2 = VAR3;
 }
 }
 FUN4(*VAR2);
 delete VAR2;
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
