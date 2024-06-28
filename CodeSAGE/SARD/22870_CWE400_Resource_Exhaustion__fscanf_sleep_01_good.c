#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 20;
 FUN2(VAR2);
 FUN3("");
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 fscanf(stdin, "", &VAR2);
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
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
