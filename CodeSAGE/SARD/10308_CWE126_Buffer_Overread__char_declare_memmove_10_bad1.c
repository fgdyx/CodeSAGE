#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if(VAR5)
 {
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR3;
 }
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: using memmove with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memmove(VAR6, VAR2, strlen(VAR6)*sizeof(char));
 VAR6[100-1] = '';
 FUN2(VAR6);
 }
}
#endif
