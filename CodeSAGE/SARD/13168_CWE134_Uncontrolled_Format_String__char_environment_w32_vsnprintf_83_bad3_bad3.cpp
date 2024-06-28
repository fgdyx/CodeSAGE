#ifndef VAR1
#VAR2 <VAR3.VAR4>
#VAR2 ""
#VAR2 ""
#define VAR5 ""
#ifdef VAR6
#define GETENV getenv
#else
#define GETENV getenv
#endif
namespace VAR7
{
VAR8::FUN1(char * VAR9)
{
 VAR10 = VAR9;
 {
 size_t VAR11 = strlen(VAR10);
 char * VAR12 = FUN2(VAR5);
 if (VAR12 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR10+VAR11, VAR12, 100-VAR11-1);
 }
 }
}
static void FUN3(char * VAR10, ...)
{
 {
 char VAR13[100] = "";
 va_list VAR14;
 FUN4(VAR14, VAR10);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 vsnprintf(VAR13, 100-1, VAR10, VAR14);
 FUN5(VAR14);
 FUN6(VAR13);
 }
}
VAR8::~FUN1()
{
 FUN3(VAR10, VAR10);
}
}
#endif
