#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define SNPRINTF _snwprintf
#else
#define SNPRINTF snprintf
#endif
namespace VAR4
{
void VAR5::FUN1(wchar_t * VAR6)
{
 {
 wchar_t VAR7[50] = VAR8"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR7, wcslen(VAR6), VAR8"", VAR6);
 FUN3(VAR6);
 }
}
}
#endif
