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
 wmemset(VAR7, VAR8'', 50-1);
 VAR7[50-1] = VAR8'';
}
VAR5::~FUN1()
{
 {
 wchar_t VAR9[50] = VAR8"";
 FUN2(VAR9, wcslen(VAR7), VAR8"", VAR7);
 FUN3(VAR7);
 }
}
}
#endif
