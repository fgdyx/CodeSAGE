#ifndef VAR1
static void FUN1()
{
 int * VAR2 = VAR3;
 {
 int VAR4[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR2, VAR4, 100*sizeof(int));
 FUN2(VAR2[0]);
 }
}
void FUN3()
{
 int * VAR2;
 int VAR5[50];
 int VAR6[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR5;
 VAR3 = VAR2;
 FUN1();
}
#endif
