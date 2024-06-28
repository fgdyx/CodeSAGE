#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (int *)malloc(50*sizeof(int));
 {
 int VAR3[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR2, VAR3, 100*sizeof(int));
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
#endif
