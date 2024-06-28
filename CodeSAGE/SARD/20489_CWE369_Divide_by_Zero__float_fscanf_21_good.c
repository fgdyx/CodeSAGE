#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(float VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if(FUN3(VAR5) > 0.000001)
 {
 int VAR6 = (int)(100.0 / VAR5);
 FUN4(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 float VAR5;
 VAR5 = 0.0F;
 fscanf (stdin, "", &VAR5);
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN6(float VAR5)
{
 if(VAR3)
 {
 if(FUN3(VAR5) > 0.000001)
 {
 int VAR6 = (int)(100.0 / VAR5);
 FUN4(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN7()
{
 float VAR5;
 VAR5 = 0.0F;
 fscanf (stdin, "", &VAR5);
 VAR3 = 1;
 FUN6(VAR5);
}
static void FUN8(float VAR5)
{
 if(VAR4)
 {
 {
 int VAR6 = (int)(100.0 / VAR5);
 FUN4(VAR6);
 }
 }
}
static void FUN9()
{
 float VAR5;
 VAR5 = 0.0F;
 VAR5 = 2.0F;
 VAR4 = 1;
 FUN8(VAR5);
}
void FUN10()
{
 FUN5();
 FUN7();
 FUN9();
}
#endif
