#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char * VAR5 = (char *)FUN2(50*sizeof(char));
 char * VAR6 = (char *)FUN2(100*sizeof(char));
 memset(VAR5, '', 50-1);
 VAR5[50-1] = '';
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 {
 char * VAR2 = *VAR3;
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR5;
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 /* POTENTIAL FLAW: using memmove with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memmove(VAR7, VAR2, strlen(VAR7)*sizeof(char));
 VAR7[100-1] = '';
 FUN3(VAR7);
 }
 }
}
#endif
