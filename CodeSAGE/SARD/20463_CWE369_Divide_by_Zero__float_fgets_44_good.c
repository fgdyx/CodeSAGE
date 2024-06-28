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
 void (*VAR4) (float) = VAR5;
 VAR2 = 0.0F;
 VAR2 = 2.0F;
 FUN4(VAR2);
}
static void FUN5(float VAR2)
{
 if(FUN6(VAR2) > 0.000001)
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN2(VAR3);
 }
 else
 {
 FUN7("");
 }
}
static void FUN8()
{
 float VAR2;
 void (*VAR4) (float) = VAR6;
 VAR2 = 0.0F;
 {
 char VAR7[VAR8];
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR2 = (float)FUN9(VAR7);
 }
 else
 {
 FUN7("");
 }
 }
 FUN4(VAR2);
}
void FUN10()
{
 FUN3();
 FUN8();
}
#endif
