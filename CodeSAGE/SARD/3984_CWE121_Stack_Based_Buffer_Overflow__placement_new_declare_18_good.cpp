#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[sizeof(VAR4)];
 char VAR5[sizeof(VAR6)];
 goto VAR7;
VAR7:
 VAR2 = VAR3;
 goto VAR8;
VAR8:
 {
 VAR4 * VAR9 = new(VAR2) VAR4;
 VAR9->VAR10 = 5;
 FUN2(VAR9->VAR10);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[sizeof(VAR4)];
 char VAR5[sizeof(VAR6)];
 goto VAR7;
VAR7:
 VAR2 = VAR5;
 goto VAR8;
VAR8:
 {
 VAR6 * VAR11 = new(VAR2) VAR6;
 VAR11->VAR10 = 5;
 classTwo->intTwo = 10;
 VAR11->VAR12 = 10;
 FUN2(VAR11->VAR10);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
