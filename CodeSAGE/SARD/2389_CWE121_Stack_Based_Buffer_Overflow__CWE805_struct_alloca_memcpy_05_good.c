#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
 if(VAR6)
 {
 FUN3("");
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
 FUN4(&VAR3[0]);
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
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
 FUN4(&VAR3[0]);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
