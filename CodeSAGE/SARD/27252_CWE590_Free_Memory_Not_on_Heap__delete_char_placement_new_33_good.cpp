#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 VAR2 = NULL;
 {
 char * VAR4 = new char;
 *VAR4 = '';
 VAR2 = VAR4;
 }
 {
 char * VAR2 = VAR3;
 FUN2(*VAR2);
 delete VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
