#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 {
 size_t VAR4 = strlen(VAR2);
 if (100-VAR4 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR4, (int)(100-VAR4), stdin) != NULL)
 {
 VAR4 = strlen(VAR2);
 if (VAR4 > 0 && VAR2[VAR4-1] == '')
 {
 VAR2[VAR4-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR4] = '';
 }
 }
 }
 {
 char * VAR2 = VAR3;
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != ''; VAR2++)
 {
 if (*VAR2 == VAR5)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
}
#endif
