#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[50];
 twoIntsStruct VAR5[100];
 if(VAR6)
 {
 FUN2("");
 }
 else
 {
 VAR3 = VAR5;
 }
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
 memcpy(VAR3, VAR7, 100*sizeof(VAR2));
 FUN3(&VAR3[0]);
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 twoIntsStruct VAR4[50];
 twoIntsStruct VAR5[100];
 if(VAR10)
 {
 VAR3 = VAR5;
 }
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
 memcpy(VAR3, VAR7, 100*sizeof(VAR2));
 FUN3(&VAR3[0]);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
