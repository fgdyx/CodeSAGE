#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
 switch(6)
 {
 case 6:
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 break;
 default:
 FUN3("");
 break;
 }
 {
 twoIntsStruct VAR6[100];
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7].VAR8 = 0;
 VAR6[VAR7].VAR8 = 0;
 }
 }
 {
 size_t VAR7;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR3[VAR7] = VAR6[VAR7];
 }
 FUN4(&VAR3[0]);
 }
 }
}
#endif
