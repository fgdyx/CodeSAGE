#ifndef VAR1
static void FUN1(int VAR2)
{
 FUN2(VAR2);
 FUN3("");
}
static void FUN4()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 VAR2 = 20;
 FUN5(VAR2);
}
static void FUN6(int VAR2)
{
 if (VAR2 > 0 && VAR2 <= 2000)
 {
 FUN2(VAR2);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
}
static void FUN7()
{
 int VAR2;
 void (*VAR3) (int) = VAR5;
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
