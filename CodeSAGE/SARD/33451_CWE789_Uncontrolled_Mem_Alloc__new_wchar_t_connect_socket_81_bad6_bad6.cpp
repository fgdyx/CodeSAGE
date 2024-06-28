#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define HELLO_STRING VAR3""
namespace VAR4
{
void VAR5::FUN1(size_t VAR6) const
{
 {
 wchar_t * VAR7;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR6 > wcslen(VAR8))
 {
 VAR7 = new wchar_t[VAR6];
 wcscpy(VAR7, VAR8);
 FUN2(VAR7);
 delete [] VAR7;
 }
 else
 {
 FUN3("");
 }
 }
}
}
#endif
