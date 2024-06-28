#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR3 = new char;
 *VAR3 = '';
 VAR2 = VAR3;
 }
 }
 FUN3(*VAR2);
 delete VAR2;
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 {
 char * VAR3 = new char;
 *VAR3 = '';
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
