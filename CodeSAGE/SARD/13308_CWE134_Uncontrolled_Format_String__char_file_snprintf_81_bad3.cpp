#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define SNPRINTF _snprintf
#else
#define SNPRINTF snprintf
#endif
namespace VAR4
{
void VAR5::FUN1(char * VAR6) const
{
 {
 char VAR7[100] = "";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR7, 100-1, VAR6);
 FUN3(VAR7);
 }
}
}
#endif
