#ifndef VAR1
VAR2 * FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN1(VAR3);
 {
 int64_t VAR4[100] = {0};
 {
 size_t VAR5;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN3(VAR3[0]);
 delete [] VAR3;
 }
 }
}
#endif
