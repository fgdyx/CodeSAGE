#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 VAR3 = VAR5;
 break;
 }
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
 FUN4(&VAR3[0]);
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
 switch(6)
 {
 case 6:
 VAR3 = VAR5;
 break;
 default:
 FUN3("");
 break;
 }
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
 FUN4(&VAR3[0]);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
