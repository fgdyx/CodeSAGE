#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
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
#endif
