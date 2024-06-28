#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[sizeof(VAR5)];
 char VAR6[sizeof(VAR7)];
 VAR2 = VAR6;
 {
 char * VAR2 = VAR3;
 {
 VAR7 * VAR8 = new(VAR2) VAR7;
 VAR8->VAR9 = 5;
 classTwo->intTwo = 10;
 VAR8->VAR10 = 10;
 FUN2(VAR8->VAR9);
 }
 }
}
static void FUN3()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[sizeof(VAR5)];
 char VAR6[sizeof(VAR7)];
 VAR2 = VAR4;
 {
 char * VAR2 = VAR3;
 {
 VAR5 * VAR11 = new(VAR2) VAR5;
 VAR11->VAR9 = 5;
 FUN2(VAR11->VAR9);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
