#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[50];
 char VAR5[100];
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Set data pointer to a small buffer */
 VAR3 = VAR4;
 }
 {
 size_t VAR2, VAR6;
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 VAR6 = strlen(VAR7);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR2 = 0; VAR2 < VAR6; VAR2++)
 {
 VAR7[VAR2] = VAR3[VAR2];
 }
 VAR7[100-1] = '';
 FUN2(VAR7);
 }
}
#endif
