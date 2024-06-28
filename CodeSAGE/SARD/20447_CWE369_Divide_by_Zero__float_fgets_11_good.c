#ifndef VAR1
static void FUN1()
{
 float VAR2;
 VAR2 = 0.0F;
 if(FUN2())
 {
 {
 char VAR3[VAR4];
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = (float)FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
 if(FUN5())
 {
 FUN4("");
 }
 else
 {
 if(FUN6(VAR2) > 0.000001)
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN7(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN8()
{
 float VAR2;
 VAR2 = 0.0F;
 if(FUN2())
 {
 {
 char VAR3[VAR4];
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = (float)FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
 if(FUN2())
 {
 if(FUN6(VAR2) > 0.000001)
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN7(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN9()
{
 float VAR2;
 VAR2 = 0.0F;
 if(FUN5())
 {
 FUN4("");
 }
 else
 {
 VAR2 = 2.0F;
 }
 if(FUN2())
 {
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN7(VAR5);
 }
 }
}
static void FUN10()
{
 float VAR2;
 VAR2 = 0.0F;
 if(FUN2())
 {
 VAR2 = 2.0F;
 }
 if(FUN2())
 {
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN7(VAR5);
 }
 }
}
void FUN11()
{
 FUN1();
 FUN8();
 FUN9();
 FUN10();
}
#endif
