#ifndef VAR1
static void FUN1(float VAR2)
{
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN2(VAR3);
 }
}
static void FUN3()
{
 float VAR2;
 VAR2 = 0.0F;
 VAR2 = 2.0F;
 FUN1(VAR2);
}
static void FUN4(float VAR2)
{
 if(FUN5(VAR2) > 0.000001)
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN2(VAR3);
 }
 else
 {
 FUN6("");
 }
}
static void FUN7()
{
 float VAR2;
 VAR2 = 0.0F;
 {
 char VAR4[VAR5];
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = (float)FUN8(VAR4);
 }
 else
 {
 FUN6("");
 }
 }
 FUN4(VAR2);
}
void FUN9()
{
 FUN7();
 FUN3();
}
#endif
