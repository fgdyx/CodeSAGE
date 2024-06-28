#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 {
 size_t VAR3 = strlen(VAR2);
 char * VAR4 = FUN2(VAR5);
 if (VAR4 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR3, VAR4, 100-VAR3-1);
 }
 }
 if(VAR6==5)
 {
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != ''; VAR2++)
 {
 if (*VAR2 == VAR7)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
 }
}
#endif
