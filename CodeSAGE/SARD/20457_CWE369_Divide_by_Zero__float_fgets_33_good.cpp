#ifndef VAR1
static void FUN1()
{
 float VAR2;
 float &VAR3 = VAR2;
 VAR2 = 0.0F;
 VAR2 = 2.0F;
 {
 float VAR2 = VAR3;
 {
 int VAR4 = (int)(100.0 / VAR2);
 FUN2(VAR4);
 }
 }
}
static void FUN3()
{
 float VAR2;
 float &VAR3 = VAR2;
 VAR2 = 0.0F;
 {
 char VAR5[VAR6];
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = (float)FUN4(VAR5);
 }
 else
 {
 FUN5("");
 }
 }
 {
 float VAR2 = VAR3;
 if(FUN6(VAR2) > 0.000001)
 {
 int VAR4 = (int)(100.0 / VAR2);
 FUN2(VAR4);
 }
 else
 {
 FUN5("");
 }
 }
}
void FUN7()
{
 FUN1();
 FUN3();
}
#endif
