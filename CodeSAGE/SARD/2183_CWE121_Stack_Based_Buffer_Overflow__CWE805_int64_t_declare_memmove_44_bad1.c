#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR3, VAR4, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 }
}
void FUN3()
{
 VAR2 * VAR3;
 void (*VAR5) (VAR2 *) = VAR6;
 int64_t VAR7[50];
 int64_t VAR8[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR7;
 FUN4(VAR3);
}
#endif
