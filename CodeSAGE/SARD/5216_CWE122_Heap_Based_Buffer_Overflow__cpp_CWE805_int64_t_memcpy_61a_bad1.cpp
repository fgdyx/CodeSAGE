#ifndef VAR1
VAR2 * FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN1(VAR3);
 {
 int64_t VAR4[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR3, VAR4, 100*sizeof(VAR2));
 FUN3(VAR3[0]);
 delete [] VAR3;
 }
}
#endif
