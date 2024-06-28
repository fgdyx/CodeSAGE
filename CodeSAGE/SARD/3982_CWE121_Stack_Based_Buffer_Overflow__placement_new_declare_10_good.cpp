#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[sizeof(VAR4)];
 char VAR5[sizeof(VAR6)];
 if(VAR7)
 {
 VAR2 = VAR3;
 }
 if(VAR8)
 {
 FUN2("");
 }
 else
 {
 {
 VAR4 * VAR9 = new(VAR2) VAR4;
 VAR9->VAR10 = 5;
 FUN3(VAR9->VAR10);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[sizeof(VAR4)];
 char VAR5[sizeof(VAR6)];
 if(VAR7)
 {
 VAR2 = VAR3;
 }
 if(VAR7)
 {
 {
 VAR4 * VAR9 = new(VAR2) VAR4;
 VAR9->VAR10 = 5;
 FUN3(VAR9->VAR10);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[sizeof(VAR4)];
 char VAR5[sizeof(VAR6)];
 if(VAR8)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR5;
 }
 if(VAR7)
 {
 {
 VAR6 * VAR11 = new(VAR2) VAR6;
 VAR11->VAR10 = 5;
 classTwo->intTwo = 10;
 VAR11->VAR12 = 10;
 FUN3(VAR11->VAR10);
 }
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[sizeof(VAR4)];
 char VAR5[sizeof(VAR6)];
 if(VAR7)
 {
 VAR2 = VAR5;
 }
 if(VAR7)
 {
 {
 VAR6 * VAR11 = new(VAR2) VAR6;
 classTwo->intTwo = 10;
 VAR11->VAR10 = 5;
 VAR11->VAR12 = 10;
 FUN3(VAR11->VAR10);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
