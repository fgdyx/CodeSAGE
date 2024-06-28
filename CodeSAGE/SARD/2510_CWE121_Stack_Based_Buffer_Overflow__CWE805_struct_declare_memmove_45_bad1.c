#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 {
 twoIntsStruct VAR5[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 0;
 VAR5[VAR6].VAR7 = 0;
 }
 }
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR3, VAR5, 100*sizeof(VAR2));
 FUN2(&VAR3[0]);
 }
}
void FUN3()
{
 VAR2 * VAR3;
 twoIntsStruct VAR8[50];
 twoIntsStruct VAR9[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR8;
 VAR4 = VAR3;
 FUN1();
}
#endif
