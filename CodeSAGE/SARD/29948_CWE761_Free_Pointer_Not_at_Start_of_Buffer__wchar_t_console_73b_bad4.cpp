#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3.FUN2();
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR4 != VAR5''; VAR4++)
 {
 if (*VAR4 == VAR6)
 {
 FUN3("");
 break;
 }
 }
 free(VAR4);
}
#endif
