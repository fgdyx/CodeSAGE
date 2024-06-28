#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 char * VAR2 = *VAR3;
 {
 char * VAR5 = new char;
 *VAR5 = '';
 VAR2 = VAR5;
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 FUN2(*VAR2);
 delete VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
