#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 VAR3 * VAR4 = new(VAR2) VAR3;
 VAR4->VAR5 = 5;
 classTwo->intTwo = 10;
 VAR4->VAR6 = 10;
 FUN2(VAR4->VAR5);
 }
}
static void FUN3()
{
 char * VAR2;
 char * VAR7 = (char *)FUN4(sizeof(VAR8));
 char * VAR9 = (char *)FUN4(sizeof(VAR3));
 VAR2 = VAR9;
 FUN1(VAR2);
}
static void FUN5(char * VAR2)
{
 {
 VAR8 * VAR10 = new(VAR2) VAR8;
 VAR10->VAR5 = 5;
 FUN2(VAR10->VAR5);
 }
}
static void FUN6()
{
 char * VAR2;
 char * VAR7 = (char *)FUN4(sizeof(VAR8));
 char * VAR9 = (char *)FUN4(sizeof(VAR3));
 VAR2 = VAR7;
 FUN5(VAR2);
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
