#ifndef VAR1
static void FUN1(int VAR2)
{
 if(VAR2 > 0)
 {
 int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 int VAR2;
 void (*VAR4) (int) = VAR5;
 VAR2 = 0;
 VAR2 = 2;
 FUN4(VAR2);
}
static void FUN5(int VAR2)
{
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR6/2))
 {
 int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
 else
 {
 FUN6("");
 }
 }
}
static void FUN7()
{
 int VAR2;
 void (*VAR4) (int) = VAR7;
 VAR2 = 0;
 fscanf(stdin, "", &VAR2);
 FUN4(VAR2);
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
