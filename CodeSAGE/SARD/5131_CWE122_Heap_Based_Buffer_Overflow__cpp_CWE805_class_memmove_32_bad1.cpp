#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = new VAR2[50];
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 {
 TwoIntsClass VAR6[100];
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7].VAR8 = 0;
 VAR6[VAR7].VAR9 = 0;
 }
 }
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR3, VAR6, 100*sizeof(VAR2));
 FUN2(VAR3[0].VAR8);
 delete [] VAR3;
 }
 }
}
#endif
