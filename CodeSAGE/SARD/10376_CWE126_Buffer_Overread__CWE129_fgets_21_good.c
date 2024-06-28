#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(int VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR6[10] = { 0 };
 if (VAR5 >= 0 && VAR5 < (10))
 {
 FUN3(VAR6[VAR5]);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN4()
{
 int VAR5;
 VAR5 = -1;
 {
 char VAR7[VAR8] = "";
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR5 = FUN5(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN6(int VAR5)
{
 if(VAR3)
 {
 {
 int VAR6[10] = { 0 };
 if (VAR5 >= 0 && VAR5 < (10))
 {
 FUN3(VAR6[VAR5]);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN7()
{
 int VAR5;
 VAR5 = -1;
 {
 char VAR7[VAR8] = "";
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR5 = FUN5(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
 VAR3 = 1;
 FUN6(VAR5);
}
static void FUN8(int VAR5)
{
 if(VAR4)
 {
 {
 int VAR6[10] = { 0 };
 if (VAR5 >= 0)
 {
 FUN3(VAR6[VAR5]);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN9()
{
 int VAR5;
 VAR5 = -1;
 VAR5 = 7;
 VAR4 = 1;
 FUN8(VAR5);
}
void FUN10()
{
 FUN4();
 FUN7();
 FUN9();
}
#endif
