#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[50];
 twoIntsStruct VAR5[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 {
 VAR2 * VAR6 = VAR3;
 VAR2 * VAR3 = VAR6;
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
 VAR3[VAR8] = VAR7[VAR8];
 }
 FUN2(&VAR3[0]);
 }
 }
 }
}
#endif
