#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[50];
 twoIntsStruct VAR5[100];
 if(1)
 {
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
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
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR3, VAR6, 100*sizeof(VAR2));
 FUN2(&VAR3[0]);
 }
}
#endif
