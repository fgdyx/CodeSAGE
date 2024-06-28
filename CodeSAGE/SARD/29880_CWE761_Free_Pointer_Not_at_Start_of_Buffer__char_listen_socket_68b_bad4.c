#ifndef VAR1
void FUN1()
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
#endif
