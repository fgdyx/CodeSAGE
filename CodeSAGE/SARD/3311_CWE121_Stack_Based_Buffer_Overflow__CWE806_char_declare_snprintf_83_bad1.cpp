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
VAR5::FUN1(char * VAR6)
{
 VAR7 = VAR6;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
}
VAR5::~FUN1()
{
 {
 char VAR8[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR8, strlen(VAR7), "", VAR7);
 FUN3(VAR7);
 }
}
}
#endif
