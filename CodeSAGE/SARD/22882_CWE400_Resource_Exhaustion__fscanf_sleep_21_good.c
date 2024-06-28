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
 if (VAR5 > 0 && VAR5 <= 2000)
 {
 FUN3(VAR5);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 int VAR5;
 VAR5 = -1;
 fscanf(stdin, "", &VAR5);
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN5(int VAR5)
{
 if(VAR3)
 {
 if (VAR5 > 0 && VAR5 <= 2000)
 {
 FUN3(VAR5);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN6()
{
 int VAR5;
 VAR5 = -1;
 fscanf(stdin, "", &VAR5);
 VAR3 = 1;
 FUN5(VAR5);
}
static void FUN7(int VAR5)
{
 if(VAR4)
 {
 FUN3(VAR5);
 FUN2("");
 }
}
static void FUN8()
{
 int VAR5;
 VAR5 = -1;
 VAR5 = 20;
 VAR4 = 1;
 FUN7(VAR5);
}
void FUN9()
{
 FUN4();
 FUN6();
 FUN8();
}
#endif
