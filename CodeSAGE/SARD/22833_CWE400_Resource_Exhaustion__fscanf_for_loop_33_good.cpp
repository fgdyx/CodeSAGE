#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int &VAR3 = VAR2;
 VAR2 = -1;
 VAR2 = 20;
 {
 int VAR2 = VAR3;
 {
 size_t VAR4 = 0;
 for (VAR4 = 0; VAR4 < (VAR5)VAR2; VAR4++)
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 int VAR2;
 int &VAR3 = VAR2;
 VAR2 = -1;
 fscanf(stdin, "", &VAR2);
 {
 int VAR2 = VAR3;
 {
 size_t VAR4 = 0;
 if (VAR2 > 0 && VAR2 <= 20)
 {
 for (VAR4 = 0; VAR4 < (VAR5)VAR2; VAR4++)
 {
 FUN2("");
 }
 }
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
