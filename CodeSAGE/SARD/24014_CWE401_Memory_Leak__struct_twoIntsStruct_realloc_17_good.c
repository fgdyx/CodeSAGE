#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 struct VAR4 * VAR5;
 VAR5 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR5 = (struct VAR4 *)realloc(VAR5, 100*sizeof(struct VAR4));
 VAR5[0].VAR6 = 0;
 VAR5[0].VAR7 = 0;
 FUN2((VAR8 *)&VAR5[0]);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 free(VAR5);
 }
}
static void FUN3()
{
 int VAR9,VAR10;
 struct VAR4 * VAR5;
 VAR5 = NULL;
 for(VAR9 = 0; VAR9 < 1; VAR9++)
 {
 VAR5 = (struct VAR4 *)FUN4(100*sizeof(struct VAR4));
 VAR5[0].VAR6 = 0;
 VAR5[0].VAR7 = 0;
 FUN2((VAR8 *)&VAR5[0]);
 }
 for(VAR10 = 0; VAR10 < 1; VAR10++)
 {
 ;
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
