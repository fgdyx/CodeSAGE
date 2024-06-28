#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 unionType VAR3;
 char * VAR4 = (char *)FUN2(sizeof(VAR5));
 char * VAR6 = (char *)FUN2(sizeof(VAR7));
 VAR2 = VAR6;
 VAR3.VAR8 = VAR2;
 {
 char * VAR2 = VAR3.VAR9;
 {
 VAR7 * VAR10 = new(VAR2) VAR7;
 VAR10->VAR11 = 5;
 classTwo->intTwo = 10;
 VAR10->VAR12 = 10;
 FUN3(VAR10->VAR11);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 unionType VAR3;
 char * VAR4 = (char *)FUN2(sizeof(VAR5));
 char * VAR6 = (char *)FUN2(sizeof(VAR7));
 VAR2 = VAR4;
 VAR3.VAR8 = VAR2;
 {
 char * VAR2 = VAR3.VAR9;
 {
 VAR5 * VAR13 = new(VAR2) VAR5;
 VAR13->VAR11 = 5;
 FUN3(VAR13->VAR11);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
