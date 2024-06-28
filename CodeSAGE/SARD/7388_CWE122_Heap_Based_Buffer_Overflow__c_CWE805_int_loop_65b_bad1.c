#ifndef VAR1
void FUN1(int * VAR2)
{
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
