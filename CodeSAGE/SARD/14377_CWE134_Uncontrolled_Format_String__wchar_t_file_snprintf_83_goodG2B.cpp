#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define VAR4 ""
#else
#define VAR4 ""
#endif
#ifdef VAR3
#define SNPRINTF _snwprintf
#else
#define SNPRINTF snprintf
#endif
namespace VAR5
{
VAR6::FUN1(wchar_t * VAR7)
{
 VAR8 = VAR7;
 wcscpy(VAR8, VAR9"");
}
VAR6::~FUN1()
{
 {
 wchar_t VAR10[100] = VAR9"";
 FUN2(VAR10, 100-1, VAR8);
 FUN3(VAR10);
 }
}
}
#endif
