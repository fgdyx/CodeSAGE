#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE126_Buffer_Overread__char_declare_memmove_34_unionType VAR3;
 char VAR4[50];
 char VAR5[100];
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR2 = VAR5;
 VAR3.VAR6 = VAR2;
 {
 char * VAR2 = VAR3.VAR7;
 {
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 memmove(VAR8, VAR2, strlen(VAR8)*sizeof(char));
 VAR8[100-1] = '';
 FUN2(VAR8);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
