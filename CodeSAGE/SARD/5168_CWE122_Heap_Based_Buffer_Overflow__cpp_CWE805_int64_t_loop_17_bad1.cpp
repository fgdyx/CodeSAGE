#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR4 = new VAR3[50];
 }
 {
 int64_t VAR5[100] = {0};
 {
 size_t VAR2;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR2 = 0; VAR2 < 100; VAR2++)
 {
 VAR4[VAR2] = VAR5[VAR2];
 }
 FUN2(VAR4[0]);
 delete [] VAR4;
 }
 }
}
#endif
