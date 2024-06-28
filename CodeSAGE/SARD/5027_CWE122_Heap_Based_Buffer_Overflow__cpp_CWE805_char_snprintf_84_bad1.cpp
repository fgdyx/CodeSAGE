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
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR7 = new char[50];
 VAR7[0] = '';
}
VAR5::~FUN1()
{
 {
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 FUN2(VAR7, 100, "", VAR8);
 FUN3(VAR7);
 delete [] VAR7;
 }
}
}
#endif
