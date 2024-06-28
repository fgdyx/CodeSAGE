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
 size_t VAR7, VAR8;
 char VAR9[100];
 memset(VAR9, '', 100-1);
 VAR9[100-1] = '';
 VAR8 = strlen(VAR9);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR9[VAR7] = VAR2[VAR7];
 }
 VAR9[100-1] = '';
 FUN3(VAR9);
 }
 }
}
#endif
