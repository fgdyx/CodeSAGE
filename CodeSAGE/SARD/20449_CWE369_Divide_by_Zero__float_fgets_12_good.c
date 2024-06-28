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
 else
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
 if(FUN5(VAR2) > 0.000001)
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN6(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
 else
 {
 if(FUN5(VAR2) > 0.000001)
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN6(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN7()
{
 float VAR2;
 VAR2 = 0.0F;
 if(FUN2())
 {
 VAR2 = 2.0F;
 }
 else
 {
 VAR2 = 2.0F;
 }
 if(FUN2())
 {
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN6(VAR5);
 }
 }
 else
 {
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN6(VAR5);
 }
 }
}
void FUN8()
{
 FUN1();
 FUN7();
}
#endif
