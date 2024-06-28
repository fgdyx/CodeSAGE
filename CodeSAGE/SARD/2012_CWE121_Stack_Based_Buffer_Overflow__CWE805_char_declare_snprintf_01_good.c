#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 VAR2 = VAR4;
 VAR2[0] = '';
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 FUN2(VAR2, 100, "", VAR5);
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
