#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 int64_t VAR4[50];
 int64_t VAR5[100];
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR3 = VAR5;
 }
 {
 int64_t VAR6[100] = {0};
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR3[VAR7] = VAR6[VAR7];
 }
 FUN4(VAR3[0]);
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 int64_t VAR4[50];
 int64_t VAR5[100];
 if(FUN6())
 {
 VAR3 = VAR5;
 }
 {
 int64_t VAR6[100] = {0};
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR3[VAR7] = VAR6[VAR7];
 }
 FUN4(VAR3[0]);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
