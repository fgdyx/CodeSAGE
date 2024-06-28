#ifndef VAR1
#VAR2 <VAR3.VAR4>
#VAR2 ""
#VAR2 ""
namespace VAR5
{
static void FUN1(char * VAR6, ...)
{
 {
 char VAR7[100] = "";
 va_list VAR8;
 FUN2(VAR8, VAR6);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 vsnprintf(VAR7, 100-1, VAR6, VAR8);
 FUN3(VAR8);
 FUN4(VAR7);
 }
}
void VAR9::FUN5(char * VAR6) const
{
 FUN1(VAR6, VAR6);
}
}
#endif
