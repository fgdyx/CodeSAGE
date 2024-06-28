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
 size_t VAR8, VAR9;
 VAR9 = strlen(VAR6);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR8 = 0; VAR8 < VAR9; VAR8++)
 {
 VAR7[VAR8] = VAR6[VAR8];
 }
 VAR7[50-1] = '';
 FUN2(VAR6);
 }
}
}
#endif
