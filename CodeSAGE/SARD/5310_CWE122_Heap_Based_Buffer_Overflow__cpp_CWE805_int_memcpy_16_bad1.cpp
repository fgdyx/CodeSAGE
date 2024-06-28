#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new int[50];
 break;
 }
 {
 int VAR3[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR2, VAR3, 100*sizeof(int));
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
}
#endif
