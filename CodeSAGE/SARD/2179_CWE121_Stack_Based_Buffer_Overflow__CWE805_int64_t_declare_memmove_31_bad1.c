#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 int64_t VAR4[50];
 int64_t VAR5[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 {
 VAR2 * VAR6 = VAR3;
 VAR2 * VAR3 = VAR6;
 {
 int64_t VAR7[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR3, VAR7, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 }
 }
}
#endif
