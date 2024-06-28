#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = new VAR2[50];
 }
 {
 int64_t VAR5[100] = {0};
 {
 size_t VAR6;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR3[VAR6] = VAR5[VAR6];
 }
 FUN2(VAR3[0]);
 delete [] VAR3;
 }
 }
}
#endif
