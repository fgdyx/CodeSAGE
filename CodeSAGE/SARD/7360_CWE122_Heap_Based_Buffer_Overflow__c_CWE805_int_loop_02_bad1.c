#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(1)
 {
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (int *)malloc(50*sizeof(int));
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
 free(VAR2);
 }
 }
}
#endif
