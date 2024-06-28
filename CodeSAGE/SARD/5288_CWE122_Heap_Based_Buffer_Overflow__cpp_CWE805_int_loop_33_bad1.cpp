#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int * &VAR3 = VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new int[50];
 {
 int * VAR2 = VAR3;
 {
 int VAR4[100] = {0};
 {
 size_t VAR5;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR2[VAR5] = VAR4[VAR5];
 }
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
 }
 }
}
#endif
