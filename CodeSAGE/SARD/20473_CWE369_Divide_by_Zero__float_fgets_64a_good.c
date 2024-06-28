#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 float VAR3;
 VAR3 = 0.0F;
 VAR3 = 2.0F;
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 float VAR3;
 VAR3 = 0.0F;
 {
 char VAR4[VAR5];
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = (float)FUN5(VAR4);
 }
 else
 {
 FUN6("");
 }
 }
 FUN3(&VAR3);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
