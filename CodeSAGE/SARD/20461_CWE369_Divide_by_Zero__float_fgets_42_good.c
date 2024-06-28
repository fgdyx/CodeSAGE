#ifndef VAR1
static float FUN1(float VAR2)
{
 VAR2 = 2.0F;
 return VAR2;
}
static void FUN2()
{
 float VAR2;
 VAR2 = 0.0F;
 VAR2 = FUN1(VAR2);
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN3(VAR3);
 }
}
static float FUN4(float VAR2)
{
 {
 char VAR4[VAR5];
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = (float)FUN5(VAR4);
 }
 else
 {
 FUN6("");
 }
 }
 return VAR2;
}
static void FUN7()
{
 float VAR2;
 VAR2 = 0.0F;
 VAR2 = FUN4(VAR2);
 if(FUN8(VAR2) > 0.000001)
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN3(VAR3);
 }
 else
 {
 FUN6("");
 }
}
void FUN9()
{
 FUN7();
 FUN2();
}
#endif
