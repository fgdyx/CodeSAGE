#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR4 = new char;
 *VAR4 = '';
 VAR2 = VAR4;
 }
 }
 FUN3(*VAR2);
 delete VAR2;
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR5)
 {
 {
 char * VAR4 = new char;
 *VAR4 = '';
 VAR2 = VAR4;
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
