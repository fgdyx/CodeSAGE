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
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR3+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN2("");
 VAR3[VAR5] = '';
 }
 fclose(VAR7);
 }
 }
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
