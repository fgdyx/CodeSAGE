#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = new char[100];
 VAR2[0] = '';
 {
 char * VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 FUN2(VAR2, 100, "", VAR4);
 FUN3(VAR2);
 delete [] VAR2;
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
