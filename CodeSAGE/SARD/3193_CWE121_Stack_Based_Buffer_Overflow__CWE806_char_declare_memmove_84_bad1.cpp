#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
}
VAR4::~FUN1()
{
 {
 char VAR7[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memmove(VAR7, VAR6, strlen(VAR6)*sizeof(char));
 VAR7[50-1] = '';
 FUN2(VAR6);
 }
}
}
#endif
