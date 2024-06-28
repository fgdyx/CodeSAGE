#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(1)
 {
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = new VAR2[50];
 }
 {
 TwoIntsClass VAR4[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 0;
 VAR4[VAR5].VAR7 = 0;
 }
 }
 {
 size_t VAR5;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN2(VAR3[0].VAR6);
 delete [] VAR3;
 }
 }
}
#endif
