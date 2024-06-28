#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 goto VAR3;
VAR3:
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 {
 char VAR4[50] = "";
 FUN2(VAR4, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN1();
}
#endif
