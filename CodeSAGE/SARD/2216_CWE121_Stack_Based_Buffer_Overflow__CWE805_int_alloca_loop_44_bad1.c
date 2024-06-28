#ifndef VAR1
static void FUN1(int * VAR2)
{
 {
 int VAR3[100] = {0};
 {
 size_t VAR4;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN2(VAR2[0]);
 }
 }
}
void FUN3()
{
 int * VAR2;
 void (*VAR5) (int *) = VAR6;
 int * VAR7 = (int *)FUN4(50*sizeof(int));
 int * VAR8 = (int *)FUN4(100*sizeof(int));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR7;
 FUN5(VAR2);
}
#endif
