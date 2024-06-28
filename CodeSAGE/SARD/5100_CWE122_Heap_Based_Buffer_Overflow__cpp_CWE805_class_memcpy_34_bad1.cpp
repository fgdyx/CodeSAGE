#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 unionType VAR4;
 VAR3 = NULL;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = new VAR2[50];
 VAR4.VAR5 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR6;
 {
 TwoIntsClass VAR7[100];
 {
 size_t VAR8;
 for (VAR8 = 0; VAR8 < 100; VAR8++)
 {
 VAR7[VAR8].VAR9 = 0;
 VAR7[VAR8].VAR10 = 0;
 }
 }
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR3, VAR7, 100*sizeof(VAR2));
 FUN2(VAR3[0].VAR9);
 delete [] VAR3;
 }
 }
}
#endif
