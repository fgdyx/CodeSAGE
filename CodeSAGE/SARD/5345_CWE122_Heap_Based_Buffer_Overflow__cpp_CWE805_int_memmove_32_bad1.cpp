#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new int[50];
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 {
 int VAR5[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR2, VAR5, 100*sizeof(int));
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
 }
}
#endif
