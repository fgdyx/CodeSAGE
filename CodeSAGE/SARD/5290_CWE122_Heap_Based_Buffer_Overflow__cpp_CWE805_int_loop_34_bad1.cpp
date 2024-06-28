#ifndef VAR1
void FUN1()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new int[50];
 VAR3.VAR4 = VAR2;
 {
 int * VAR2 = VAR3.VAR5;
 {
 int VAR6[100] = {0};
 {
 size_t VAR7;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR2[VAR7] = VAR6[VAR7];
 }
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
 }
 }
}
#endif
