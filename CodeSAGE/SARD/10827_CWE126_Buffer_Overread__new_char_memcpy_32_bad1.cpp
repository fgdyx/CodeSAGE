#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 char * VAR2 = *VAR3;
 /* FLAW: Use a small buffer */
 VAR2 = new char[50];
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: using memcpy with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memcpy(VAR5, VAR2, strlen(VAR5)*sizeof(char));
 VAR5[100-1] = '';
 FUN2(VAR5);
 delete [] VAR2;
 }
 }
}
#endif
