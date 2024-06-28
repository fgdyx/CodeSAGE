#ifndef VAR1
void FUN1(int &VAR2);
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 {
 size_t VAR3 = 0;
 for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
 {
 FUN3("");
 }
 }
}
void FUN4(int &VAR2);
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 FUN4(VAR2);
 {
 size_t VAR3 = 0;
 if (VAR2 > 0 && VAR2 <= 20)
 {
 for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
 {
 FUN3("");
 }
 }
 }
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
