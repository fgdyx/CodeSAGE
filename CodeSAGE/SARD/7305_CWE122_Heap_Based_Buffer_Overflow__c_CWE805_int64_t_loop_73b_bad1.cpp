#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4.FUN2();
 {
 int64_t VAR6[100] = {0};
 {
 size_t VAR7;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR5[VAR7] = VAR6[VAR7];
 }
 FUN3(VAR5[0]);
 free(VAR5);
 }
 }
}
#endif
