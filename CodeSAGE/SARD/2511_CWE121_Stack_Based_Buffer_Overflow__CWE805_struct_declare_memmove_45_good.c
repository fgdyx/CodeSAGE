#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 {
 twoIntsStruct VAR5[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 0;
 VAR5[VAR6].VAR7 = 0;
 }
 }
 memmove(VAR3, VAR5, 100*sizeof(VAR2));
 FUN2(&VAR3[0]);
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 twoIntsStruct VAR8[50];
 twoIntsStruct VAR9[100];
 VAR3 = VAR9;
 VAR4 = VAR3;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
