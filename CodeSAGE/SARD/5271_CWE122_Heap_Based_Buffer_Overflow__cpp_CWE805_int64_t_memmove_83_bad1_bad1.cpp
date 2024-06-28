#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR7 = new VAR5[50];
}
VAR4::~FUN1()
{
 {
 int64_t VAR8[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR7, VAR8, 100*sizeof(VAR5));
 FUN2(VAR7[0]);
 delete [] VAR7;
 }
}
}
#endif
