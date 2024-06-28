#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR3 = new VAR2[100];
 }
 {
 TwoIntsClass VAR4[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 0;
 VAR4[VAR5].VAR7 = 0;
 }
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN4(VAR3[0].VAR6);
 delete [] VAR3;
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN6())
 {
 VAR3 = new VAR2[100];
 }
 {
 TwoIntsClass VAR4[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 0;
 VAR4[VAR5].VAR7 = 0;
 }
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN4(VAR3[0].VAR6);
 delete [] VAR3;
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
