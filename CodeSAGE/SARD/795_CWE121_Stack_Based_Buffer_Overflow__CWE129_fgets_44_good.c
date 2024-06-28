#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 int VAR3;
 int VAR4[10] = { 0 };
 if (VAR2 >= 0)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN2(VAR4[VAR3]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN4()
{
 int VAR2;
 void (*VAR5) (int) = VAR6;
 VAR2 = -1;
 VAR2 = 7;
 FUN5(VAR2);
}
static void FUN6(int VAR2)
{
 {
 int VAR3;
 int VAR4[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN2(VAR4[VAR3]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN7()
{
 int VAR2;
 void (*VAR5) (int) = VAR7;
 VAR2 = -1;
 {
 char VAR8[VAR9] = "";
 if (fgets(VAR8, VAR9, stdin) != NULL)
 {
 VAR2 = FUN8(VAR8);
 }
 else
 {
 FUN3("");
 }
 }
 FUN5(VAR2);
}
void FUN9()
{
 FUN4();
 FUN7();
}
#endif
