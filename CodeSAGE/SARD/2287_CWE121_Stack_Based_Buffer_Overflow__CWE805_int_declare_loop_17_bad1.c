#ifndef VAR1
void FUN1()
{
 int VAR2;
 int * VAR3;
 int VAR4[50];
 int VAR5[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 }
 {
 int VAR6[100] = {0};
 {
 size_t VAR2;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR2 = 0; VAR2 < 100; VAR2++)
 {
 VAR3[VAR2] = VAR6[VAR2];
 }
 FUN2(VAR3[0]);
 }
 }
}
#endif
