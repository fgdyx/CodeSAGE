#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 char * VAR3 = new char;
 *VAR3 = '';
 VAR2 = VAR3;
 }
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
void FUN4()
{
 FUN1();
}
#endif
