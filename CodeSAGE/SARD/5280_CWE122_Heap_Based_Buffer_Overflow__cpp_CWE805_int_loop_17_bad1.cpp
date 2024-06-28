#ifndef VAR1
void FUN1()
{
 int VAR2;
 int * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = new int[50];
 }
 {
 int VAR4[100] = {0};
 {
 size_t VAR2;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR2 = 0; VAR2 < 100; VAR2++)
 {
 VAR3[VAR2] = VAR4[VAR2];
 }
 FUN2(VAR3[0]);
 delete [] VAR3;
 }
 }
}
#endif
