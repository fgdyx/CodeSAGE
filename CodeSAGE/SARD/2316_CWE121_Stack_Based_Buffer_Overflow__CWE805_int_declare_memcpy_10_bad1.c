#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 if(VAR5)
 {
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR3;
 }
 {
 int VAR6[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR2, VAR6, 100*sizeof(int));
 FUN2(VAR2[0]);
 }
}
#endif
