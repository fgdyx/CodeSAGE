#ifndef VAR1
#VAR2 <VAR3.VAR4>
#VAR2 ""
#VAR2 ""
#define ENV_VARIABLE VAR5""
#ifdef VAR6
#define GETENV _wgetenv
#else
#define GETENV getenv
#endif
namespace VAR7
{
VAR8::FUN1(wchar_t * VAR9)
{
 VAR10 = VAR9;
 {
 size_t VAR11 = wcslen(VAR10);
 wchar_t * VAR12 = FUN2(VAR13);
 if (VAR12 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR10+VAR11, VAR12, 100-VAR11-1);
 }
 }
}
static void FUN3(wchar_t * VAR10, ...)
{
 {
 va_list VAR14;
 FUN4(VAR14, VAR10);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN5(VAR15, VAR10, VAR14);
 FUN6(VAR14);
 }
}
VAR8::~FUN1()
{
 FUN3(VAR10, VAR10);
}
}
#endif
