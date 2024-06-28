#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define SEARCH_CHAR VAR3''
namespace VAR4
{
void VAR5::FUN1(wchar_t * VAR6)
{
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR6 != VAR3''; VAR6++)
 {
 if (*VAR6 == VAR7)
 {
 FUN2("");
 break;
 }
 }
 free(VAR6);
}
}
#endif
