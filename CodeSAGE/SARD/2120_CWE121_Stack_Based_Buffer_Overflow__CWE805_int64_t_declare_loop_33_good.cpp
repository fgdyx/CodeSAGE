#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 int64_t VAR5[50];
 int64_t VAR6[100];
 VAR3 = VAR6;
 {
 VAR2 * VAR3 = VAR4;
 {
 int64_t VAR7[100] = {0};
 {
 size_t VAR8;
 for (VAR8 = 0; VAR8 < 100; VAR8++)
 {
 VAR3[VAR8] = VAR7[VAR8];
 }
 FUN2(VAR3[0]);
 }
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
