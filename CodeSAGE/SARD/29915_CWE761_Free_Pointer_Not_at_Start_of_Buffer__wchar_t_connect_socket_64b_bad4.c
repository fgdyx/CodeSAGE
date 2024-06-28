#ifndef VAR1
void FUN1(void * VAR2)
{
 wchar_t * * VAR3 = (wchar_t * *)VAR2;
 wchar_t * VAR4 = (*VAR3);
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR4 != VAR5''; VAR4++)
 {
 if (*VAR4 == VAR6)
 {
 FUN2("");
 break;
 }
 }
 free(VAR4);
}
#endif
