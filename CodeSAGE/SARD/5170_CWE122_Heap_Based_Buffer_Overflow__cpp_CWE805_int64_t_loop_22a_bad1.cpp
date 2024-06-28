#ifndef VAR1
int VAR2 = 0;
VAR3 * FUN1(VAR3 * VAR4);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR2 = 1;
 VAR4 = FUN1(VAR4);
 {
 int64_t VAR5[100] = {0};
 {
 size_t VAR6;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR4[VAR6] = VAR5[VAR6];
 }
 FUN3(VAR4[0]);
 delete [] VAR4;
 }
 }
 ;
}
#endif
