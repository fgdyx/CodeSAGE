#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 int * VAR3 = new int[100];
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5;
 }
 }
 VAR2 = VAR3;
 }
 }
 FUN4(VAR2[0]);
 delete [] VAR2;
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN6())
 {
 {
 int * VAR3 = new int[100];
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5;
 }
 }
 VAR2 = VAR3;
 }
 }
 FUN4(VAR2[0]);
 delete [] VAR2;
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
