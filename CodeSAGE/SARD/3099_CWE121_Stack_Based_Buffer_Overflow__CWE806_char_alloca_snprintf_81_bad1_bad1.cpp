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
 char VAR7[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR7, strlen(VAR6), "", VAR6);
 FUN3(VAR6);
 }
}
}
#endif
