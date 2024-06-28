#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: using memmove with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memmove(VAR3, VAR2, strlen(VAR3)*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 free(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 /* FLAW: Use a small buffer */
 VAR2 = (char *)malloc(50*sizeof(char));
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 FUN1(VAR2);
}
#endif
