#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 {
 char * VAR2 = *VAR3;
 /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
 strcpy(VAR2, VAR5);
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != ''; VAR2++)
 {
 if (*VAR2 == VAR6)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
}
#endif
