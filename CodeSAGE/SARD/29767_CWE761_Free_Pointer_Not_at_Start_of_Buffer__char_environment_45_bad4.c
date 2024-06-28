#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != ''; VAR2++)
 {
 if (*VAR2 == VAR4)
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
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN4(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
