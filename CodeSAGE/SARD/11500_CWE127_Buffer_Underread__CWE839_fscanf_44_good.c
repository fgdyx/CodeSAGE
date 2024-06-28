#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 int VAR3[10] = { 0 };
 if (VAR2 < 10)
 {
 FUN2(VAR3[VAR2]);
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
 void (*VAR4) (int) = VAR5;
 VAR2 = -1;
 VAR2 = 7;
 FUN5(VAR2);
}
static void FUN6(int VAR2)
{
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN2(VAR3[VAR2]);
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
 void (*VAR4) (int) = VAR6;
 VAR2 = -1;
 fscanf(stdin, "", &VAR2);
 FUN5(VAR2);
}
void FUN8()
{
 FUN4();
 FUN7();
}
#endif
