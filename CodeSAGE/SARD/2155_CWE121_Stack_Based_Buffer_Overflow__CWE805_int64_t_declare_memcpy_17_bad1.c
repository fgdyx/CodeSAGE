#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 int64_t VAR5[50];
 int64_t VAR6[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR4 = VAR5;
 }
 {
 int64_t VAR7[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR4, VAR7, 100*sizeof(VAR3));
 FUN2(VAR4[0]);
 }
}
#endif
