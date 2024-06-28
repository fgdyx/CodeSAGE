#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR7 = (VAR5 *)malloc(50*sizeof(VAR5));
}
VAR4::~FUN1()
{
 {
 twoIntsStruct VAR8[100];
 {
 size_t VAR9;
 for (VAR9 = 0; VAR9 < 100; VAR9++)
 {
 VAR8[VAR9].VAR10 = 0;
 VAR8[VAR9].VAR11 = 0;
 }
 }
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR7, VAR8, 100*sizeof(VAR5));
 FUN2(&VAR7[0]);
 free(VAR7);
 }
}
}
#endif
