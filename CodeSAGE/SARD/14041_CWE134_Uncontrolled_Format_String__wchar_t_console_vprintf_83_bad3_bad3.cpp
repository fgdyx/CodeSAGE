#ifndef VAR1
#VAR2 <VAR3.VAR4>
#VAR2 ""
#VAR2 ""
namespace VAR5
{
VAR6::FUN1(wchar_t * VAR7)
{
 VAR8 = VAR7;
 {
 size_t VAR9 = wcslen(VAR8);
 if (100-VAR9 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR8+VAR9, (int)(100-VAR9), stdin) != NULL)
 {
 VAR9 = wcslen(VAR8);
 if (VAR9 > 0 && VAR8[VAR9-1] == VAR10'')
 {
 VAR8[VAR9-1] = VAR10'';
 }
 }
 else
 {
 FUN3("");
 VAR8[VAR9] = VAR10'';
 }
 }
 }
}
static void FUN4(wchar_t * VAR8, ...)
{
 {
 va_list VAR11;
 FUN5(VAR11, VAR8);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN6(VAR8, VAR11);
 FUN7(VAR11);
 }
}
VAR6::~FUN1()
{
 FUN4(VAR8, VAR8);
}
}
#endif
