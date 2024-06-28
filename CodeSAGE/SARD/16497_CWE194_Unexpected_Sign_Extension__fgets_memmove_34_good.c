#ifndef VAR1
static void FUN1()
{
 short VAR2;
 CWE194_Unexpected_Sign_Extension__fgets_memmove_34_unionType VAR3;
 VAR2 = 0;
 VAR2 = 100-1;
 VAR3.VAR4 = VAR2;
 {
 short VAR2 = VAR3.VAR5;
 {
 char VAR6[100];
 char VAR7[100] = "";
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 if (VAR2 < 100)
 {
 memmove(VAR7, VAR6, VAR2);
 VAR7[VAR2] = '';
 }
 FUN2(VAR7);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
