#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR6 = (char *)malloc(50*sizeof(char));
 VAR6[0] = '';
}
VAR4::~FUN1()
{
 {
 size_t VAR7;
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7] = VAR8[VAR7];
 }
 VAR6[100-1] = '';
 FUN2(VAR6);
 free(VAR6);
 }
}
}
#endif
