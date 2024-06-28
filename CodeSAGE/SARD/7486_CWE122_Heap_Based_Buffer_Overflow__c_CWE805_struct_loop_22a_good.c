#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
VAR4 * FUN1(VAR4 * VAR5);
static void FUN2()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR2 = 0;
 VAR5 = FUN1(VAR5);
 {
 twoIntsStruct VAR6[100];
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7].VAR8 = 0;
 VAR6[VAR7].VAR9 = 0;
 }
 }
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR5[VAR7] = VAR6[VAR7];
 }
 FUN3(&VAR5[0]);
 free(VAR5);
 }
 }
}
VAR4 * FUN4(VAR4 * VAR5);
static void FUN5()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR3 = 1;
 VAR5 = FUN4(VAR5);
 {
 twoIntsStruct VAR6[100];
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7].VAR8 = 0;
 VAR6[VAR7].VAR9 = 0;
 }
 }
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR5[VAR7] = VAR6[VAR7];
 }
 FUN3(&VAR5[0]);
 free(VAR5);
 }
 }
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
