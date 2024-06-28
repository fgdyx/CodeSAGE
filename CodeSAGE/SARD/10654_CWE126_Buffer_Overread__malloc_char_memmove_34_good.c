#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE126_Buffer_Overread__malloc_char_memmove_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memmove(VAR6, VAR2, strlen(VAR6)*sizeof(char));
 VAR6[100-1] = '';
 FUN2(VAR6);
 free(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
