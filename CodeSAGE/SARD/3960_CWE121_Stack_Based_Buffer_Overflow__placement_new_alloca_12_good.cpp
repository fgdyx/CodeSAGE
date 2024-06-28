#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(FUN3())
 {
 VAR2 = VAR3;
 }
 else
 {
 VAR2 = VAR3;
 }
 if(FUN3())
 {
 {
 VAR4 * VAR7 = new(VAR2) VAR4;
 VAR7->VAR8 = 5;
 FUN4(VAR7->VAR8);
 }
 }
 else
 {
 {
 VAR4 * VAR7 = new(VAR2) VAR4;
 VAR7->VAR8 = 5;
 FUN4(VAR7->VAR8);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(sizeof(VAR4));
 char * VAR5 = (char *)FUN2(sizeof(VAR6));
 if(FUN3())
 {
 VAR2 = VAR5;
 }
 else
 {
 VAR2 = VAR5;
 }
 if(FUN3())
 {
 {
 VAR6 * VAR9 = new(VAR2) VAR6;
 VAR9->VAR8 = 5;
 classTwo->intTwo = 10;
 VAR9->VAR10 = 10;
 FUN4(VAR9->VAR8);
 }
 }
 else
 {
 {
 VAR6 * VAR9 = new(VAR2) VAR6;
 classTwo->intTwo = 10;
 VAR9->VAR8 = 5;
 VAR9->VAR10 = 10;
 FUN4(VAR9->VAR8);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
