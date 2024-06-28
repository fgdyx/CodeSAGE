#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new int[50];
 }
 {
 int VAR3[100] = {0};
 {
 size_t VAR4;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
 }
}
#endif
