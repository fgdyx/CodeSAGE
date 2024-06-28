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
VAR5::FUN1(wchar_t * VAR6)
{
 VAR7 = VAR6;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR7, VAR8'', 100-1);
 VAR7[100-1] = VAR8'';
}
VAR5::~FUN1()
{
 {
 wchar_t VAR9[50] = VAR8"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR9, wcslen(VAR7), VAR8"", VAR7);
 FUN3(VAR7);
 }
}
}
#endif
