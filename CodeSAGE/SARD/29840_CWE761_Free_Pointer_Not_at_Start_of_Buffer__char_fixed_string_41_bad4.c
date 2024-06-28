#ifndef VAR1
static void FUN1(char * VAR2)
{
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != ''; VAR2++)
 {
 if (*VAR2 == VAR3)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
}
void FUN3()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
 strcpy(VAR2, VAR4);
 FUN1(VAR2);
}
#endif
