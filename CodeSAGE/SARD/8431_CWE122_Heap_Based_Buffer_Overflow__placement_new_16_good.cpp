#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 while(1)
 {
 VAR2 = VAR3;
 break;
 }
 while(1)
 {
 {
 VAR4 * VAR7 = new(VAR2) VAR4;
 VAR7->VAR8 = 5;
 FUN2(VAR7->VAR8);
 free(VAR2);
 }
 break;
 }
}
static void FUN3()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 while(1)
 {
 VAR2 = VAR5;
 break;
 }
 while(1)
 {
 {
 VAR6 * VAR9 = new(VAR2) VAR6;
 VAR9->VAR8 = 5;
 classTwo->intTwo = 10;
 VAR9->VAR10 = 10;
 FUN2(VAR9->VAR8);
 free(VAR2);
 }
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
