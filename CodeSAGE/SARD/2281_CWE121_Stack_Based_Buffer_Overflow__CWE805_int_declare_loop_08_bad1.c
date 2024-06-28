#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 if(FUN2())
 {
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR3;
 }
 {
 int VAR5[100] = {0};
 {
 size_t VAR6;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR2[VAR6] = VAR5[VAR6];
 }
 FUN3(VAR2[0]);
 }
 }
}
#endif
