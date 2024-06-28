#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 /* FLAW: Use a small buffer */
 VAR2 = (char *)malloc(50*sizeof(char));
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 size_t VAR3, VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR4 = strlen(VAR5);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR3 = 0; VAR3 < VAR4; VAR3++)
 {
 VAR5[VAR3] = VAR2[VAR3];
 }
 VAR5[100-1] = '';
 FUN2(VAR5);
 free(VAR2);
 }
}
#endif
