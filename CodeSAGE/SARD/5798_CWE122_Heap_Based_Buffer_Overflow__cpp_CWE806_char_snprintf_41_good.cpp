#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[50] = "";
 FUN2(VAR3, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = new char[100];
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 FUN1(VAR2);
}
void FUN5()
{
 FUN4();
}
#endif
