#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 goto VAR3;
VAR3:
 fscanf (stdin, "", &VAR2);
 goto VAR4;
VAR4:
 if (VAR2 < VAR5)
 {
 short VAR6 = VAR2 + 1;
 FUN2(VAR6);
 }
 else
 {
 FUN3("");
 }
}
static void FUN4()
{
 short VAR2;
 VAR2 = 0;
 goto VAR3;
VAR3:
 VAR2 = 2;
 goto VAR4;
VAR4:
 {
 short VAR6 = VAR2 + 1;
 FUN2(VAR6);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
