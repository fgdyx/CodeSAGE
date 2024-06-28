#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = 0;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = VAR5;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 if (FUN2((long)VAR4) <= (long)FUN3((double)VAR5))
 {
 int VAR6 = VAR4 * VAR4;
 FUN4(VAR6);
 }
 else
 {
 FUN5("");
 }
 }
}
static void FUN6()
{
 int VAR7,VAR8;
 int VAR4;
 VAR4 = 0;
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 VAR4 = 2;
 }
 for(VAR8 = 0; VAR8 < 1; VAR8++)
 {
 {
 int VAR6 = VAR4 * VAR4;
 FUN4(VAR6);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN6();
}
#endif
