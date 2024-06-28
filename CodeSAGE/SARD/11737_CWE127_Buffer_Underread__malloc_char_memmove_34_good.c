#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE127_Buffer_Underread__malloc_char_memmove_34_unionType VAR3;
 VAR2 = NULL;
 {
 char * VAR4 = (char *)malloc(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 memmove(VAR7, VAR2, 100*sizeof(char));
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
