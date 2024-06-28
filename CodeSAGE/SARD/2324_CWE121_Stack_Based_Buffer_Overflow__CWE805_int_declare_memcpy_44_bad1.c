#ifndef VAR1
static void FUN1(int * VAR2)
{
 {
 int VAR3[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR2, VAR3, 100*sizeof(int));
 FUN2(VAR2[0]);
 }
}
void FUN3()
{
 int * VAR2;
 void (*VAR4) (int *) = VAR5;
 int VAR6[50];
 int VAR7[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR6;
 FUN4(VAR2);
}
#endif
