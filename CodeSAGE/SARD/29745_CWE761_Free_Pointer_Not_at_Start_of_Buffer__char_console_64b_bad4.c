#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR4 != ''; VAR4++)
 {
 if (*VAR4 == VAR5)
 {
 FUN2("");
 break;
 }
 }
 free(VAR4);
}
#endif
