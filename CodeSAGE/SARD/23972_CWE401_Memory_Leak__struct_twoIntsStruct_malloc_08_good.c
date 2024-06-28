#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = (struct VAR2 *)malloc(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3((VAR6 *)&VAR3[0]);
 }
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 free(VAR3);
 }
}
static void FUN6()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = (struct VAR2 *)malloc(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3((VAR6 *)&VAR3[0]);
 }
 if(FUN2())
 {
 free(VAR3);
 }
}
static void FUN7()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 VAR3 = (struct VAR2 *)FUN8(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3((VAR6 *)&VAR3[0]);
 }
 if(FUN2())
 {
 ;
 }
}
static void FUN9()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = (struct VAR2 *)FUN8(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3((VAR6 *)&VAR3[0]);
 }
 if(FUN2())
 {
 ;
 }
}
void FUN10()
{
 FUN1();
 FUN6();
 FUN7();
 FUN9();
}
#endif
