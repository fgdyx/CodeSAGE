#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define ENV_VARIABLE VAR3""
#ifdef VAR4
#define GETENV _wgetenv
#else
#define GETENV getenv
#endif
namespace VAR5
{
VAR6::FUN1(wchar_t * VAR7)
{
 VAR8 = VAR7;
 {
 size_t VAR9 = wcslen(VAR8);
 wchar_t * VAR10 = FUN2(VAR11);
 if (VAR10 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR8+VAR9, VAR10, 250-VAR9-1);
 }
 }
}
VAR6::~FUN1()
{
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN3(VAR8);
}
}
#endif
