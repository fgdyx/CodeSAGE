#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 goto VAR3;
VAR3:
 fscanf(stdin, "", &VAR2);
 goto VAR4;
VAR4:
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR5/2))
 {
 int VAR6 = VAR2 * 2;
 FUN2(VAR6);
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
 VAR2 = 0;
 goto VAR3;
VAR3:
 VAR2 = 2;
 goto VAR4;
VAR4:
 if(VAR2 > 0)
 {
 int VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
