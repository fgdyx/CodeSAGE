#ifndef VAR1
void FUN1(char * &VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 FUN1(VAR2);
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != ''; VAR2++)
 {
 if (*VAR2 == VAR3)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
}
#endif
