#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE127_Buffer_Underread__char_declare_ncpy_34_unionType VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 strncpy(VAR7, VAR2, strlen(VAR7));
 VAR7[100-1] = '';
 FUN2(VAR7);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
