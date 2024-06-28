#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_34_unionType VAR4;
 twoIntsStruct VAR5[50];
 twoIntsStruct VAR6[100];
 VAR3 = VAR6;
 VAR4.VAR7 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR8;
 {
 twoIntsStruct VAR9[100];
 {
 size_t VAR10;
 for (VAR10 = 0; VAR10 < 100; VAR10++)
 {
 VAR9[VAR10].VAR11 = 0;
 VAR9[VAR10].VAR11 = 0;
 }
 }
 {
 size_t VAR10;
 for (VAR10 = 0; VAR10 < 100; VAR10++)
 {
 VAR3[VAR10] = VAR9[VAR10];
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
