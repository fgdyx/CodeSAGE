#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 if(FUN2())
 {
 VAR2 = VAR3;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 {
 VAR4 * VAR7 = new(VAR2) VAR4;
 VAR7->VAR8 = 5;
 FUN5(VAR7->VAR8);
 free(VAR2);
 }
 }
}
static void FUN6()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 if(FUN2())
 {
 VAR2 = VAR3;
 }
 if(FUN2())
 {
 {
 VAR4 * VAR7 = new(VAR2) VAR4;
 VAR7->VAR8 = 5;
 FUN5(VAR7->VAR8);
 free(VAR2);
 }
 }
}
static void FUN7()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = VAR5;
 }
 if(FUN2())
 {
 {
 VAR6 * VAR9 = new(VAR2) VAR6;
 VAR9->VAR8 = 5;
 classTwo->intTwo = 10;
 VAR9->VAR10 = 10;
 FUN5(VAR9->VAR8);
 free(VAR2);
 }
 }
}
static void FUN8()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 if(FUN2())
 {
 VAR2 = VAR5;
 }
 if(FUN2())
 {
 {
 VAR6 * VAR9 = new(VAR2) VAR6;
 classTwo->intTwo = 10;
 VAR9->VAR8 = 5;
 VAR9->VAR10 = 10;
 FUN5(VAR9->VAR8);
 free(VAR2);
 }
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
