#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 VAR2 * VAR5 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR6 = (VAR2 *)FUN2(100*sizeof(VAR2));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR5;
 {
 VAR2 * VAR3 = VAR4;
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
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR3, VAR7, 100*sizeof(VAR2));
 FUN3(&VAR3[0]);
 }
 }
}
#endif
