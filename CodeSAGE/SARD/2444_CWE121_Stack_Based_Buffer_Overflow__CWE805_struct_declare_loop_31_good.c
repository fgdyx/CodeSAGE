#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[50];
 twoIntsStruct VAR5[100];
 VAR3 = VAR5;
 {
 VAR2 * VAR6 = VAR3;
 VAR2 * VAR3 = VAR6;
 {
 twoIntsStruct VAR7[100];
 {
 size_t VAR8;
 for (VAR8 = 0; VAR8 < 100; VAR8++)
 {
 VAR7[VAR8].VAR9 = 0;
 VAR7[VAR8].VAR9 = 0;
 }
 }
 {
 size_t VAR8;
 for (VAR8 = 0; VAR8 < 100; VAR8++)
 {
 VAR3[VAR8] = VAR7[VAR8];
 }
 FUN2(&VAR3[0]);
 }
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
