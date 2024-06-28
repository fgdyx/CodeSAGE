#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR3, VAR4, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 delete [] VAR3;
 }
}
void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = new VAR2[50];
 FUN1(VAR3);
}
#endif
