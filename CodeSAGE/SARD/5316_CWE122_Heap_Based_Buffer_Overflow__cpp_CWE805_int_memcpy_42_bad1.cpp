#ifndef VAR1
static int * FUN1(int * VAR2)
{
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new int[50];
 return VAR2;
}
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 int VAR3[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR2, VAR3, 100*sizeof(int));
 FUN3(VAR2[0]);
 delete [] VAR2;
 }
}
#endif
