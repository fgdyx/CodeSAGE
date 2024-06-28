#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 float VAR4;
 VAR4 = 0.0F;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 char VAR5[VAR6];
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = (float)FUN2(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 if(FUN4(VAR4) > 0.000001)
 {
 int VAR7 = (int)(100.0 / VAR4);
 FUN5(VAR7);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN6()
{
 int VAR8,VAR9;
 float VAR4;
 VAR4 = 0.0F;
 for(VAR8 = 0; VAR8 < 1; VAR8++)
 {
 VAR4 = 2.0F;
 }
 for(VAR9 = 0; VAR9 < 1; VAR9++)
 {
 {
 int VAR7 = (int)(100.0 / VAR4);
 FUN5(VAR7);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN6();
}
#endif
