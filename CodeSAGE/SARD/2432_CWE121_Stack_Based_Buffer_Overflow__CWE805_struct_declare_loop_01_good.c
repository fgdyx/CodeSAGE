#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[50];
 twoIntsStruct VAR5[100];
 VAR3 = VAR5;
 {
 twoIntsStruct VAR6[100];
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7].VAR8 = 0;
 VAR6[VAR7].VAR8 = 0;
 }
 }
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR3[VAR7] = VAR6[VAR7];
 }
 FUN2(&VAR3[0]);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
