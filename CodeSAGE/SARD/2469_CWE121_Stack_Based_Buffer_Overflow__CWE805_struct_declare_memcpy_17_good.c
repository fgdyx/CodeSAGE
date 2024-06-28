#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 twoIntsStruct VAR5[50];
 twoIntsStruct VAR6[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = VAR6;
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
 memcpy(VAR4, VAR7, 100*sizeof(VAR3));
 FUN2(&VAR4[0]);
 }
}
void FUN3()
{
 FUN1();
}
#endif
