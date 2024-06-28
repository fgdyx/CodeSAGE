#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = -5;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 int VAR2;
 int VAR5[10] = { 0 };
 if (VAR4 >= 0 && VAR4 < (10))
 {
 VAR5[VAR4] = 1;
 for(VAR2 = 0; VAR2 < 10; VAR2++)
 {
 FUN2(VAR5[VAR2]);
 }
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 int VAR6,VAR7;
 int VAR4;
 VAR4 = -1;
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 VAR4 = 7;
 }
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 {
 int VAR2;
 int VAR5[10] = { 0 };
 if (VAR4 < 10)
 {
 VAR5[VAR4] = 1;
 for(VAR2 = 0; VAR2 < 10; VAR2++)
 {
 FUN2(VAR5[VAR2]);
 }
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
