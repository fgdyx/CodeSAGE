#ifndef VAR1
void FUN1()
{
 int VAR2 = VAR3;
 {
 int VAR4;
 int VAR5[10] = { 0 };
 if (VAR2 < 10)
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN2(VAR5[VAR4]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 int VAR2 = VAR6;
 {
 int VAR4;
 int VAR5[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN2(VAR5[VAR4]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
