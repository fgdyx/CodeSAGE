#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 {
 size_t VAR5;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN2(VAR3[0]);
 }
 }
}
void FUN3()
{
 VAR2 * VAR3;
 VAR2 * VAR6 = (VAR2 *)FUN4(50*sizeof(VAR2));
 VAR2 * VAR7 = (VAR2 *)FUN4(100*sizeof(VAR2));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR6;
 FUN1(VAR3);
}
#endif
