#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(VAR5 * VAR6) const
{
 {
 twoIntsStruct VAR7[100];
 {
 size_t VAR8;
 for (VAR8 = 0; VAR8 < 100; VAR8++)
 {
 VAR7[VAR8].VAR9 = 0;
 VAR7[VAR8].VAR9 = 0;
 }
 }
 {
 size_t VAR8;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR8 = 0; VAR8 < 100; VAR8++)
 {
 VAR6[VAR8] = VAR7[VAR8];
 }
 FUN2(&VAR6[0]);
 }
 }
}
}
#endif
