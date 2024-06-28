#ifndef VAR1
void FUN1(int * VAR2)
{
 {
 int VAR3[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR2, VAR3, 100*sizeof(int));
 FUN2(VAR2[0]);
 }
}
void FUN3()
{
 int * VAR2;
 int * VAR4 = (int *)FUN4(50*sizeof(int));
 int * VAR5 = (int *)FUN4(100*sizeof(int));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR4;
 FUN1(VAR2);
}
#endif
