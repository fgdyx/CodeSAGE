#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 int64_t VAR4[50];
 int64_t VAR5[100];
 if(FUN2())
 {
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 }
 else
 {
 VAR3 = VAR5;
 }
 {
 int64_t VAR6[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR3, VAR6, 100*sizeof(VAR2));
 FUN3(VAR3[0]);
 }
}
#endif
