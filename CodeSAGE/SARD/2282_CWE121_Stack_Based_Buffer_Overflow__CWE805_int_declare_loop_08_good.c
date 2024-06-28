#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR4;
 }
 {
 int VAR5[100] = {0};
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR2[VAR6] = VAR5[VAR6];
 }
 FUN4(VAR2[0]);
 }
 }
}
static void FUN5()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 if(FUN6())
 {
 VAR2 = VAR4;
 }
 {
 int VAR5[100] = {0};
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR2[VAR6] = VAR5[VAR6];
 }
 FUN4(VAR2[0]);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
