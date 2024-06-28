#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 FUN3(VAR2, 100, "", VAR3);
 FUN4(VAR2);
 delete [] VAR2;
 }
}
void FUN5()
{
 FUN2();
}
#endif
