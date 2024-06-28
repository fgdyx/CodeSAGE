#ifndef VAR1
static int VAR2 = 0;
static void FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR3 != ''; VAR3++)
 {
 if (*VAR3 == VAR4)
 {
 FUN2("");
 break;
 }
 }
 free(VAR3);
 }
}
void FUN3()
{
 char * VAR3;
 VAR3 = (char *)malloc(100*sizeof(char));
 VAR3[0] = '';
 {
 size_t VAR5 = strlen(VAR3);
 char * VAR6 = FUN4(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR3+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
