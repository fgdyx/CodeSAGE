#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define ENV_VARIABLE VAR3""
#ifdef VAR4
#define GETENV _wgetenv
#else
#define GETENV getenv
#endif
#VAR2 <VAR5.VAR6>
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
VAR8::~FUN1()
{
 {
 HMODULE VAR14;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR14 = LoadLibraryW(VAR10);
 if (VAR14 != NULL)
 {
 FUN3(VAR14);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
}
#endif
