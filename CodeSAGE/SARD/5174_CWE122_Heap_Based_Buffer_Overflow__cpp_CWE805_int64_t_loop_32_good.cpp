#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 VAR3 = new VAR2[100];
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 {
 int64_t VAR6[100] = {0};
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR3[VAR7] = VAR6[VAR7];
 }
 FUN2(VAR3[0]);
 delete [] VAR3;
 }
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
