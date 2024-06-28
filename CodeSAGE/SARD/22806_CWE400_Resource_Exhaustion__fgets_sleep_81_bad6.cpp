#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#VAR2 <VAR4.VAR5>
#define SLEEP VAR6
#else
#VAR2 <VAR7.VAR5>
#define SLEEP VAR8
#endif
namespace VAR9
{
void VAR10::FUN1(int VAR11) const
{
 /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
 FUN2(VAR11);
 FUN3("");
}
}
#endif
