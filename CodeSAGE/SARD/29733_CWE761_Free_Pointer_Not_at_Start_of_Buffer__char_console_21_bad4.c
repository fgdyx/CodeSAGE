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
 if (100-VAR5 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR3+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = strlen(VAR3);
 if (VAR5 > 0 && VAR3[VAR5-1] == '')
 {
 VAR3[VAR5-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR3[VAR5] = '';
 }
 }
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
