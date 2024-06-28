#ifndef VAR1
static int VAR2 = 0;
static int * FUN1(int * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (int *)malloc(50*sizeof(int));
 }
 return VAR3;
}
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 int VAR4[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR3, VAR4, 100*sizeof(int));
 FUN3(VAR3[0]);
 free(VAR3);
 }
}
#endif
