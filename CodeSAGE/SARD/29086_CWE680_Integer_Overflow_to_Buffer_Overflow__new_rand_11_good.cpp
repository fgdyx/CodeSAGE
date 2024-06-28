#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = 20;
 }
 {
 size_t VAR3,VAR4;
 int *VAR5;
 VAR3 = VAR2 * sizeof(int);
 VAR5 = (int*)new char[VAR3];
 for (VAR4 = 0; VAR4 < (VAR6)VAR2; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN4(VAR5[0]);
 delete [] VAR5;
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(FUN6())
 {
 VAR2 = 20;
 }
 {
 size_t VAR3,VAR4;
 int *VAR5;
 VAR3 = VAR2 * sizeof(int);
 VAR5 = (int*)new char[VAR3];
 for (VAR4 = 0; VAR4 < (VAR6)VAR2; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN4(VAR5[0]);
 delete [] VAR5;
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
