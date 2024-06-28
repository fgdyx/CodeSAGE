#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE127_Buffer_Underread__char_declare_cpy_34_unionType VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[100*2];
 memset(VAR7, '', 100*2-1);
 VAR7[100*2-1] = '';
 strcpy(VAR7, VAR2);
 FUN2(VAR7);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
