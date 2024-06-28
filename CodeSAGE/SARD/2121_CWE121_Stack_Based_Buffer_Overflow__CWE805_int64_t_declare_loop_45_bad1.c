#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 {
 int64_t VAR5[100] = {0};
 {
 size_t VAR6;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR3[VAR6] = VAR5[VAR6];
 }
 FUN2(VAR3[0]);
 }
 }
}
void FUN3()
{
 VAR2 * VAR3;
 int64_t VAR7[50];
 int64_t VAR8[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR7;
 VAR4 = VAR3;
 FUN1();
}
#endif
