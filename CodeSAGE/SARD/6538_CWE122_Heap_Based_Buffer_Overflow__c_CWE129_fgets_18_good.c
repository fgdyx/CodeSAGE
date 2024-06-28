#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 goto VAR6;
VAR6:
 {
 int VAR7;
 int * VAR8 = (int *)malloc(10 * sizeof(int));
 for (VAR7 = 0; VAR7 < 10; VAR7++)
 {
 VAR8[VAR7] = 0;
 }
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR8[VAR2] = 1;
 for(VAR7 = 0; VAR7 < 10; VAR7++)
 {
 FUN4(VAR8[VAR7]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR8);
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 VAR2 = 7;
 goto VAR6;
VAR6:
 {
 int VAR7;
 int * VAR8 = (int *)malloc(10 * sizeof(int));
 for (VAR7 = 0; VAR7 < 10; VAR7++)
 {
 VAR8[VAR7] = 0;
 }
 if (VAR2 >= 0)
 {
 VAR8[VAR2] = 1;
 for(VAR7 = 0; VAR7 < 10; VAR7++)
 {
 FUN4(VAR8[VAR7]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR8);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
