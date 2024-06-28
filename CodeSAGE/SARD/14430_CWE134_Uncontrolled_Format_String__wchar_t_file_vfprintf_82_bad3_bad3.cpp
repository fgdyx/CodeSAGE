#ifndef VAR1
#VAR2 <VAR3.VAR4>
#VAR2 ""
#VAR2 ""
namespace VAR5
{
static void FUN1(wchar_t * VAR6, ...)
{
 {
 va_list VAR7;
 FUN2(VAR7, VAR6);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR8, VAR6, VAR7);
 FUN4(VAR7);
 }
}
void VAR9::FUN5(wchar_t * VAR6)
{
 FUN1(VAR6, VAR6);
}
}
#endif
