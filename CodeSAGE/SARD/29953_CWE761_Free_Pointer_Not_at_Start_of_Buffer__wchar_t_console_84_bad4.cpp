#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define SEARCH_CHAR VAR3''
namespace VAR4
{
VAR5::FUN1(wchar_t * VAR6)
{
 VAR7 = VAR6;
 {
 size_t VAR8 = wcslen(VAR7);
 if (100-VAR8 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR7+VAR8, (int)(100-VAR8), stdin) != NULL)
 {
 VAR8 = wcslen(VAR7);
 if (VAR8 > 0 && VAR7[VAR8-1] == VAR3'')
 {
 VAR7[VAR8-1] = VAR3'';
 }
 }
 else
 {
 FUN3("");
 VAR7[VAR8] = VAR3'';
 }
 }
 }
}
VAR5::~FUN1()
{
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR7 != VAR3''; VAR7++)
 {
 if (*VAR7 == VAR9)
 {
 FUN3("");
 break;
 }
 }
 free(VAR7);
}
}
#endif
