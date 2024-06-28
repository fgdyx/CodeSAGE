#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 VAR2 = 20;
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 size_t VAR5 = 0;
 for (VAR5 = 0; VAR5 < (VAR6)VAR2; VAR5++)
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 {
 char VAR7[VAR8] = "";
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR2 = FUN4(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 size_t VAR5 = 0;
 if (VAR2 > 0 && VAR2 <= 20)
 {
 for (VAR5 = 0; VAR5 < (VAR6)VAR2; VAR5++)
 {
 FUN2("");
 }
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
